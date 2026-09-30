#ifndef CONNECTION_MANAGER_H
#define CONNECTION_MANAGER_H

#include <unordered_map>
#include <set>
#include <memory>

#include "Connection_manager_traits.h"
#include "Event_traits.h"

#include "pointer_types.h"
#include "Mutex.h"


namespace Navtech::Networking {

    // ----------------------------------------------------------------------------
    // The Connection_manager controls the lifetime of Connection objects, and provides
    // an interface to give access to the current set of Connections.
    //
    template <Protocol protocol, Transport transport>
    class Connection_manager {
    public:
        // Type aliases.
        // The '_Ty' postfix denotes a template type. Rather than being
        // supplied as template parameters on the class (which would be
        // unwieldy) these parameters are looked up from the Connection_mgr_traits
        // class, using the appropriate combination of protocol and transport
        //
        using Event_traits          = Navtech::Networking::Event_traits<protocol, transport>;
        using Connection_mgr_traits = Connection_manager_traits<protocol, transport>;
        using Protocol_traits       = typename Connection_mgr_traits::Protocol_traits;
        using Connection            = typename Connection_mgr_traits::Connection;
        using Socket_Ty             = typename Connection_mgr_traits::Socket;
        using Message_Ty            = typename Connection::Message_Ty;
        using ID_Ty                 = typename Connection_mgr_traits::ID;
        using Dispatcher_Ty         = typename Event_traits::Dispatcher;

        Connection_manager(Dispatcher_Ty& event_dispatcher);
        ~Connection_manager();

        void create_connection(Socket_Ty&& sckt);

        std::vector<association_to<Connection>> all_connections();

        void send(const Message_Ty& msg);
        void send(Message_Ty& msg);
    
        bool remove(ID_Ty id);
        bool remove(const IP_address& ip_addr);
        void remove_all();

        std::size_t num_connections() const;

    protected:
        association_to<Connection> connection(ID_Ty id);
        
    private:
        // External associations
        //
        association_to<Dispatcher_Ty>      dispatcher;

        std::unordered_map<ID_Ty, shared_owner<Connection>> connections { };
        std::set<Networking::IP_address> well_known_clients { };

        mutable Mutex connections_mutex { };
        std::size_t   num_connected_clients { };
        
        ID_Ty next_id();
        bool is_well_known(const IP_address& ip_addr) const;
        bool exceeded_max_connections() const;
        bool exists(const IP_address& ip_addr) const;
        void reconnect_client(Socket_Ty&& socket);
        void add_client_connection(Socket_Ty&& sckt);
        void add_well_known_connection(Socket_Ty&& sckt);
        std::string connection_list() const;

        void send_to_id(const Message_Ty& msg);
        void send_to_id(Message_Ty&& msg);
        void send_to_all(const Message_Ty& msg);
    };


    // ----------------------------------------------------------------------------

    template <Protocol protocol, Transport transport>
    Connection_manager<protocol, transport>::Connection_manager(
        Connection_manager<protocol, transport>::Dispatcher_Ty& event_dispatcher
    ) :
        dispatcher          { associate_with(event_dispatcher) },
        well_known_clients  { Connection_mgr_traits::well_known_clients() }
    {
    }
    

    template <Protocol protocol, Transport transport>
    Connection_manager<protocol, transport>::~Connection_manager()
    {
        remove_all();

        // TODO - logging
        //
        // core_services->log_message(std::string { Protocol_traits::name } + " connection manager - closed ");
    }


    template <Protocol protocol, Transport transport>
    void Connection_manager<protocol, transport>::create_connection(Connection_manager<protocol, transport>::Socket_Ty&& socket)
    {
        auto incoming_client_addr = socket.peer().ip_address;

        if (is_well_known(incoming_client_addr)) {
            reconnect_client(std::move(socket));
            return;
        }

        if (!exceeded_max_connections()) {
            add_client_connection(std::move(socket));
            return;
        }
    }


    template <Protocol protocol, Transport transport>
    bool Connection_manager<protocol, transport>::exists(const IP_address& ip_addr) const
    {
        bool client_exists { false };

        CRITICAL_SECTION(connections_mutex)
        {
            auto it = std::find_if(
                connections.begin(),
                connections.end(),
                [&ip_addr](const auto& elem) { return (elem.second->remote_endpoint().ip_address == ip_addr); }
            );

            client_exists = (it != connections.end());
        }
        
        if (client_exists) {
            stdout_log << Protocol_traits::name << " connection manager - client already connected "
                   << "[" << ip_addr.to_string() << "]"
                   << endl;
        }
        
        return client_exists;
    }


    template <Protocol protocol, Transport transport>
    bool Connection_manager<protocol, transport>::is_well_known(const IP_address& ip_addr) const
    {
        auto well_known = (well_known_clients.count(ip_addr) == 1);

        if (well_known) {
            stdout_log << Protocol_traits::name << " connection manager - accepting connection from well-known address "
                   << "[" << ip_addr.to_string() << "]"
                   << endl;
        }

        return well_known;
    }


    template <Protocol protocol, Transport transport>
    bool Connection_manager<protocol, transport>::exceeded_max_connections() const
    {
        Scoped_lock lock { connections_mutex };

        if (num_connected_clients >= Connection_mgr_traits::max_clients) {
            stdout_log << Protocol_traits::name << " connection manager - maximum connections exceeded. "
                   << "Current [" << num_connected_clients << "] "
                   << "Max [" << Connection_mgr_traits::max_clients << "]"
                   << endl;
            return true;
        }
        else {
            return false;
        }
    }


    template <Protocol protocol, Transport transport>
    void Connection_manager<protocol, transport>::add_client_connection(Connection_manager<protocol, transport>::Socket_Ty&& sckt)
    {
        auto id = next_id();

        stdout_log << Protocol_traits::name << " connection manager - adding connection "
                   << "[" << id << "]"
                   << "[" << sckt.peer().ip_address.to_string() << "]"
                   << endl;

        // core_services->log_message(
        //     std::string { Protocol_traits::name } + " connection manager - adding connection "
        //     "[" + std::to_string(id) + "]"
        //     "[" + sckt.peer().ip_address.to_string() + "]"
        // );

        CRITICAL_SECTION(connections_mutex)
        {
            auto inserted = connections.emplace(
                id, 
                allocate_shared<Connection>(id, std::move(sckt), *dispatcher)
            );

            inserted.first->second->open();

            // TODO  - Do we need to maintain a client list
            //
            // Connection_mgr_traits::update_client_list(
            //     *this, 
            //     core_services->configuration_manager()->Config()
            // );

            ++num_connected_clients;
        }

        dispatcher->template notify<Event_traits::Client_connected>(id);
    }


    template <Protocol protocol, Transport transport>
    void Connection_manager<protocol, transport>::add_well_known_connection(Connection_manager<protocol, transport>::Socket_Ty&& sckt)
    {
        auto id = next_id();

        stdout_log << Protocol_traits::name << " connection manager - adding well-known connection "
                   << "[" << id << "]"
                   << "[" << sckt.peer().ip_address.to_string() << "]"
                   << endl;

        // core_services->log_message(
        //     std::string { Protocol_traits::name } + " connection manager - adding well-known connection "
        //     "[" + std::to_string(id) + "]"
        //     "[" + sckt.peer().ip_address.to_string() + "]"
        // );

        CRITICAL_SECTION(connections_mutex)
        {
            auto inserted = connections.emplace(
                id, 
                allocate_shared<Connection>(id, std::move(sckt), *dispatcher)
            );

            inserted.first->second->open();
            ++num_connected_clients;
        }
    
        dispatcher->template notify<Event_traits::Client_connected>(id);
    }


    template <Protocol protocol, Transport transport>
    void Connection_manager<protocol, transport>::reconnect_client(Connection_manager<protocol, transport>::Socket_Ty&& socket)
    {
        auto incoming_client = socket.peer().ip_address;

        stdout_log << Protocol_traits::name << " connection manager - reconnecting client "
                   << "[" << incoming_client.to_string() << "]"
                   << endl;

        // core_services->log_message(
        //     std::string { Protocol_traits::name } + " connection manager - "
        //     "reconnecting client "
        //     "[" + incoming_client.to_string() + "]" 
        // );

        remove(incoming_client);
        add_well_known_connection(std::move(socket));
    }


    template <Protocol protocol, Transport transport>
    void Connection_manager<protocol, transport>::send(const Connection_manager<protocol, transport>::Message_Ty& msg)
    {
        // ID_Ty zero is the 'broadcast' address
        //
        if (Protocol_traits::client_id(msg) == 0) send_to_all(msg);
        else                                      send_to_id(msg);
    }


    template <Protocol protocol, Transport transport>
    void Connection_manager<protocol, transport>::send(Connection_manager<protocol, transport>::Message_Ty& msg)
    {
        if (Protocol_traits::client_id(msg) == 0) send_to_all(std::move(msg));
        else                                      send_to_id(std::move(msg));
    }


    template <Protocol protocol, Transport transport>
    void Connection_manager<protocol, transport>::send_to_id(const Connection_manager<protocol, transport>::Message_Ty& msg)
    {
        CRITICAL_SECTION(connections_mutex)
        {
            auto conx = connection(Protocol_traits::client_id(msg));

            if (conx) conx->send(msg);
        }
    }


    template <Protocol protocol, Transport transport>
    void Connection_manager<protocol, transport>::send_to_id(Connection_manager<protocol, transport>::Message_Ty&& msg)
    {
        CRITICAL_SECTION(connections_mutex)
        {
            auto conx = connection(Protocol_traits::client_id(msg));

            if (conx) conx->send(std::move(msg));
        }
    }


    template <Protocol protocol, Transport transport>
    void Connection_manager<protocol, transport>::send_to_all(const Connection_manager<protocol, transport>::Message_Ty& msg)
    {
        CRITICAL_SECTION(connections_mutex)
        {
            auto conxs = all_connections();

            for (auto connection : conxs) {
                if (connection) connection->send(msg);
            }
        }
    }


    template <Protocol protocol, Transport transport>
    association_to<typename Connection_manager<protocol, transport>::Connection> 
    Connection_manager<protocol, transport>::connection(Connection_manager<protocol, transport>::ID_Ty id)
    {
        if (auto it = connections.find(id); it != end(connections)) {
            return it->second.get();
        }
        else {
            return nullptr;
        }
    }


    template <Protocol protocol, Transport transport>
    std::vector<association_to<typename Connection_manager<protocol, transport>::Connection>> 
    Connection_manager<protocol, transport>::all_connections()
    {
        std::vector<association_to<Connection_manager<protocol, transport>::Connection>> results { };

        for (auto& connection_pair : connections) {
            results.push_back(connection_pair.second.get());
        }

        return results;
    }
    

    template <Protocol protocol, Transport transport>
    bool Connection_manager<protocol, transport>::remove(Connection_manager<protocol, transport>::ID_Ty id)
    {
        bool found { };
        shared_owner<Connection> to_delete { };

        CRITICAL_SECTION(connections_mutex)
        {
            auto it = connections.find(id);

            if (it != end(connections)) {
                to_delete = it->second;
                connections.erase(it);

                // TODO - do we need this?
                //
                // Connection_mgr_traits::update_client_list(
                //     *this, 
                //     core_services->configuration_manager()->Config()
                // );

                if (num_connected_clients > 0) --num_connected_clients;
                found = true;
            }
        }

        if (found) {
            to_delete.reset();

            stdout_log << Protocol_traits::name << " connection manager - removed connection [" << id << "] "
                       << "Current connections [" << num_connected_clients << "]"
                       << endl;

            dispatcher->template notify<Event_traits::Client_disconnected>(id);
        }

        return found;
    }


    template <Protocol protocol, Transport transport>
    bool Connection_manager<protocol, transport>::remove(const IP_address& ip_addr)
    {
        bool found { };
        ID_Ty   id { };
        shared_owner<Connection> to_delete { };

        CRITICAL_SECTION(connections_mutex)
        {
            auto it = std::find_if(
                connections.begin(),
                connections.end(),
                [&ip_addr](const auto& elem) { return (elem.second->remote_endpoint().ip_address == ip_addr); }
            );

            if (it != end(connections)) {
                id        = it->first;
                to_delete = it->second;
                connections.erase(it);

                // TODO - do we need this?
                //
                // Connection_mgr_traits::update_client_list(
                //     *this, 
                //     core_services->configuration_manager()->Config()
                // );

                if (num_connected_clients > 0) --num_connected_clients;
                found = true;
            }
        }

        if (found) {
            to_delete.reset();

            stdout_log << Protocol_traits::name << " connection manager - removed connection [" << id << "] "
                       << "Current connections [" << num_connected_clients << "]"
                       << endl;
            
            dispatcher->template notify<Event_traits::Client_disconnected>(id);
        }

        return found;
    }


    template <Protocol protocol, Transport transport>
    void Connection_manager<protocol, transport>::remove_all()
    {
        // Removing elements from the connections map will
        // invalid iterators; so build a vector of IDs to
        // remove, then remove each one individually.
        //
        std::vector<ID_Ty> to_remove { };

        CRITICAL_SECTION(connections_mutex)
        {
            for (const auto& connection_pair : connections) {
                to_remove.emplace_back(connection_pair.first);
            }
        }

        for (auto id : to_remove) {
            remove(id);
        }
    }


    template <Protocol protocol, Transport transport>
    typename Connection_manager<protocol, transport>::ID_Ty Connection_manager<protocol, transport>::next_id()
    {
        // Connection ID_Ty 0 (zero) is configured as the 'broadcast'
        // ID_Ty - that is, send to all available connections
        //
        static Connection_manager<protocol, transport>::ID_Ty id { 1 };
        return id++;
    }


    template <Protocol protocol, Transport transport> 
    std::size_t Connection_manager<protocol, transport>::num_connections() const
    {
        std::size_t sz { };

        CRITICAL_SECTION(connections_mutex)
        {
            sz = connections.size();
        }

        return sz;
    }

    template <Protocol protocol, Transport transport> 
    std::string Connection_manager<protocol, transport>::connection_list() const
    {
        std::stringstream stream { };

        CRITICAL_SECTION(connections_mutex)
        {
            if (connections.size() == 0) return "Current connections [0]";

            stream << "Current connection IDs [";

            for (auto iter = connections.begin(); iter != connections.end(); iter++) {
                if (iter != connections.begin()) stream << ", ";
                stream << iter->first;
                if (!iter->second->is_enabled()) stream << "*";
            }

            stream << "]";
        }

        return stream.str();                
    }


} // namespace Navtech::Networking

#endif // CONNECTION_MANAGER_H