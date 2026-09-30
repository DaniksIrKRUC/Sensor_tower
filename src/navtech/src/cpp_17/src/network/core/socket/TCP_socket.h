#ifndef TCP_SOCKET_H
#define TCP_SOCKET_H

#include "Socket.h"
#include "Endpoint.h"

namespace Navtech::Networking {

    // -----------------------------------------------------------------------------
    // A TCP_socket is a connection-based socket
    //
    class TCP_socket : public Socket {
    public:
        TCP_socket();

        // NOTE: All functions will throw a std::system_error
        // exception on failure; except where noted.
        
        // Read/write interface
        //
        std::size_t send(const std::vector<std::uint8_t>& buffer);
        std::size_t send(std::vector<std::uint8_t>&& buffer);

        std::vector<std::uint8_t> receive(std::size_t num_bytes);
        std::vector<std::uint8_t> receive(std::size_t num_bytes, Read_mode mode);

        // Connection interface
        //
        void bind_to(const Endpoint& endpt);
        void listen(std::uint8_t max_connections);
        TCP_socket accept();
        
        void connect_to(const Endpoint& endpt);

        Endpoint peer() const;
        
    protected:
        TCP_socket(Socket::Native_handle socket_handle, const Endpoint& endpt);

    private:
        std::vector<std::uint8_t> recv_buffer { };
    };

} // namespace Navtech::Networking

#endif // TCP_SOCKET_H