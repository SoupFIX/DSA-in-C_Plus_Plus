#include <iostream>
#include <string>
#include <vector>
#include <cstring> // For memset
#include <winsock2.h>
#include <ws2tcpip.h>
#include <mutex>
#include <unistd.h>
using namespace std;
#define PORT 6667;
#define MAX 10;
#define BUFFER_SIZE 1024;
vector<int> clients;
void handle_clients()
int main()
{ //AF_INET = IPv4,SOCK_STREAM = TCP,0=default protocol for tcp
    int server_socket = socket(AF_INET, SOCK_STREAM, 0);
    //error handling if socket creation failed
    if (server_socket <= 0)
    {
        cout << "socket creation unsuccessfull";
        exit(1);
    }   
    SOCKADDR_IN serveraddr;
    // I am using IPv4 addresses
    serveraddr.sin_family = AF_INET;
    // INADDR_ANY means listen on all the network interfaces available(0.0.0.0)
    // listen on all IP address.
    serveraddr.sin_addr.s_addr = INADDR_ANY;
    serveraddr.sin_port = htons(PORT);
    if (bind(server_socket, (SOCKADDR *)&serveraddr, sizeof(serveraddr)) < 0)
    {
        cout << "Bind failed!";
        exit(1);
    }
    if (listen(server_socket, MAX) < 0)
    {
        cout << "listening failed !";
        exit(1);
    }
}