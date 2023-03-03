#include <sys/types.h>
#include <arpa/inet.h>
#include <iostream>
#include <netdb.h>
#include <string>
#include <unistd.h>
#include <sys/socket.h>
#include <sstream>

// to test it first run it, then open terminal and use 
//telnet localhost 5555

// To declare a port we use:
#define PORT 5555

// using namespace std;
int main(int argc, char *argv[])
{

    // creating the SERVER address
    struct sockaddr_in saddr = {
        .sin_family = AF_INET, // we are going to use the IP4
        .sin_addr.s_addr = INADDR_ANY,
        .sin_port = htons(PORT) // setting port to 5000
    };

    int option = 1;
    int serverAddressSize = sizeof(saddr);

    /*
    SOCK_STREAM is used for TCP
    SOCK_DGRAM for UDP

    third parameter just means we are not creating any additional protocols
    */
    int socketServer = socket(AF_INET, SOCK_STREAM, 0);

    setsockopt(socketServer, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &option, sizeof(option));

    if (socketServer == -1)
    {
        std::cerr << "Not able to create socket" << std::endl;
        return -1;
    }
    else
    {
        std::cout << "Successfully found socket" << std::endl;
    };

    struct sockaddr_in caddr;
    socklen_t caddrSize = sizeof(caddr);
    int socketClient;

    bind(socketServer, (struct sockaddr *)&saddr, sizeof(saddr));

    // Now we need to set it to listening and SOMAXCONN mean we are enabling the maximun that our socket can handle -> 128
    listen(socketServer, SOMAXCONN);
    std::stringstream ss; // using this specific way becase it couldn't get for using namespace
    ss << PORT;
    std::cout << "Server listening on port: " << ss.str() << std::endl;

    char buff[4096];
    int dataSizeInBytes;

    while (true)
    {
        socketClient = accept(socketServer, (struct sockaddr *)&caddr, (socklen_t *)&caddrSize);
        std::cout << " Client connected with success" << std::endl;

        char hostClient[NI_MAXHOST];
        char portClient[NI_MAXSERV];

        // clean the memory
        memset(hostClient, 0, NI_MAXHOST);
        memset(portClient, 0, NI_MAXSERV);

        if (getnameinfo((sockaddr *)&caddr, sizeof(caddr), hostClient, NI_MAXHOST, portClient, NI_MAXSERV, 0) == 0)
        {
            std::cout << hostClient << " Connected to the port " << portClient << std::endl;
        }
        else
        {
            inet_ntop(AF_INET, &caddr.sin_addr, hostClient, NI_MAXHOST);
            std::cout
                << hostClient << " Connected to the port " << ntohs(caddr.sin_port) << std::endl;
        }
        // receive data
        dataSizeInBytes = recv(socketClient, buff, 4096, 0);

        if (dataSizeInBytes == -1)
        {
            std::cout << " Error receiving message" << std::endl;
            break;
        }
        else if (dataSizeInBytes == -0)
        {
            std::cout << "Client disconnected" << std::endl;
            break;
        }
        send(socketClient, buff, dataSizeInBytes + 1, 0);
        std::cout << std::string(buff, 0, dataSizeInBytes) << std::endl;
        close(socketClient);
    }

    return 0;
}