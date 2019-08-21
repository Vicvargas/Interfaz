#include "cliente.h"
#include <iostream>

Cliente::Cliente()
{
    sock = 0;
      buffer[1024] = {0};

      if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
          {
             cout<<"Error en la creación del socket"<< endl;
          }

      serv_addr.sin_family = AF_INET;
      serv_addr.sin_port = htons(PORT);

      if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0)  {
          cout<<"Dirección inválida"<< endl;
      }

      if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0){

          cout<<"La conexión falló"<<endl;
      }

  }

  void Cliente::enviar(char *mensaje){
      send(sock, mensaje, strlen(mensaje), 0);

}
