//TCP SERVER source files
#include "server1.h"

using namespace std;

void main() {
  //main Locals
  long SUCCESSFUL;
  WSAData WinSockData;
  WORD DLLVERSION;

  //WORDS = objects of a data size that a processor naturally handles (such as 16 or 32-bit)
  DLLVERSION = MAKEWORD(2,1); //macro to create WORD value by concatenating its arguments

  //Start Winsock DLL
  SUCCESSFUL = WSAStartup(DLLVERSION, &WinSockData);

  //Create Socket Structure
  SOCKADDR_IN ADDRESS;
  int AddressSize = sizeof(ADDRESS);

  //Create Sockets
  SOCKET sock_LISTEN;
  SOCKET sock_CONNECTION;

  //socket Arguments: AF_INET = internet domain
  //SOCK_STREAM = connection oriented TCP (not SOCK_DGRAM)
  sock_CONNECTION = socket(AF_INET, SOCK_STREAM, NULL);
  ADDRESS.sin_addr.s_addr = inet_addr("127.0.0.1"); //Set IP
  ADDRESS.sin_family = AF_INET;
  ADDRESS.sin_port = htons(444); //port

  sock_LISTEN = socket(AF_INET, SOCK_STREAM, NULL);
  bind(sock_LISTEN, (SOCKADDR*)&ADDRESS, sizeof(ADDRESS));
  listen(sock_LISTEN, SOMAXCONN); //listen without limits

  //If connection found:
  for(;;)
  {
    cout << "\n\tSERVER: Waiting for incoming connection...";

    if(sock_CONNECTION = accept(sock_LISTEN, (SOCKADDR*)&ADDRESS, &AddressSize))
    {
      cout << "\n\tA connection was found!" << endl;

      SUCCESSFUL = send(sock_CONNECTION, "Welcome! You have connected to Test SERVER!", 46, NULL);
    }
  }
}
