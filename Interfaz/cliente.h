#ifndef CLIENT_H
#define CLIENT_H

#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#define PORT 8080

using namespace std;

class Cliente
{
public:
    int sock, valread;
    struct sockaddr_in serv_addr;
    char buffer[1024];

public:
    Cliente();
    void enviar(char* mensaje);
};

#endif // CLIENT_H
