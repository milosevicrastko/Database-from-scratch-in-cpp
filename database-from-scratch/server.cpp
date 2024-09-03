#include<iostream>
#include "server.h"

Server::Server(std::string ipAddress, std::uint16_t port) {
    this->ipAddress = ipAddress;
    this->port = port;

}

Server::~Server() {
    this->stop();
}


int Server::start(){
    std::cout<<"Server started on address "<<ipAddress<<" and on port " <<port<< "\n";
    return 0;
}

void Server::stop() {
    std::cout<<"Server stopped"<<"\n";
}

int main() {
    Server* server = new Server("localhost",8080);
    server->start();
    delete server;
}
