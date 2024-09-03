#include<iostream>
#include<sys/socket.h>
#include<arpa/inet.h>
#include "server.h"
#include <unistd.h>

Server::Server(std::string ipAddress, std::uint16_t port):sock(0) {
    this->ipAddress = ipAddress;
    this->port = port;

}

Server::~Server() {
    this->stop();
}


int Server::start(){
    this->sock = socket(AF_INET, SOCK_STREAM,0);
    if (this->sock < 0){
        std::cout<<"Cannot create socket"<<"\n";
        return 1;
    }
    std::cout<<"Server started on address "<<ipAddress<<" and on port " <<port<< "\n";
    return 0;
}

void Server::stop() {
    close(sock);
    std::cout<<"Server stopped"<<"\n";
}

int main() {
    Server* server = new Server("localhost",8080);
    server->start();
    delete server;
}
