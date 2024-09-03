#include<iostream>
#include "server.h"

Server::Server(std::string ipAddress, std::uint16_t port) {
    this->ipAddress = ipAddress;
    this->port = port;

    std::cout<<"Server started on address "<<ipAddress<<" and on port " <<port<< "\n";
}

Server::~Server() {
    std::cout<<"Server stopped"<<"\n";
}

int main() {
    Server* server = new Server("localhost",8080);
    delete server;
}
