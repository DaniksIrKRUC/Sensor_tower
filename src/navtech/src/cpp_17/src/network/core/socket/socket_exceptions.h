#ifndef SOCKET_EXCEPTIONS_H
#define SOCKET_EXCEPTIONS_H

#include <system_error>

namespace Navtech::Networking {

    class client_shutdown : public std::system_error {
    public:
        client_shutdown() : std::system_error { 0, std::system_category(), "Client performed orderly shutdown" }
        {
        }
    };

} // namespace Navtech::Networking

#endif // SOCKET_EXCEPTIONS_H