#include<string>
#include<cstdint>
class Server {
    private:
        std::string ipAddress;
        std::uint16_t port;
        int sock;
    public:
        Server(std::string ipAddress, std::uint16_t port);
        ~Server();

        int start();
        void stop();

};
