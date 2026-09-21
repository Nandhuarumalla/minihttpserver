#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

#define PORT 8080

int main() {
    WSADATA wsa;
    SOCKET server_fd, client_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char buffer[3000] = {0};

    // Initialize Winsock
    WSAStartup(MAKEWORD(2,2), &wsa);

    // 1. Create socket
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd == INVALID_SOCKET) {
        printf("Socket failed\n");
        return 1;
    }

    // 2. Setup address
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    // 3. Bind
    if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) == SOCKET_ERROR) {
        printf("Bind failed\n");
        return 1;
    }

    // 4. Listen
    if (listen(server_fd, 3) == SOCKET_ERROR) {
        printf("Listen failed\n");
        return 1;
    }

    printf("Server running on port %d...\n", PORT);

    // 5. Accept clientprintf("Server running on port %d...\n", PORT);

while (1) {

    // 5. Accept client
    client_socket = accept(server_fd, (struct sockaddr*)&address, &addrlen);

    if (client_socket == INVALID_SOCKET) {
        printf("Accept failed\n");
        continue;
    }

    // 6. Read request
    recv(client_socket, buffer, 3000, 0);
    char method[10], path[100];
sscanf(buffer, "%s %s", method, path);

printf("Path: %s\n", path);
    printf("Message from client:\n%s\n", buffer);

    // 7. Send response (HTML file)
    char response[5000];

if (strcmp(path, "/about") == 0) {

    sprintf(response,
        "HTTP/1.1 200 OK\r\n"
        "Content-Type: text/html\r\n"
        "\r\n"
        "<h1>About Page 📄</h1>"
        "<p>This is about section</p>"
    );

} 
else if (strcmp(path, "/home") == 0) {

    sprintf(response,
        "HTTP/1.1 200 OK\r\n"
        "Content-Type: text/html\r\n"
        "\r\n"
        "<h1>Home Page 🏠</h1>"
    );

} 
else {

    sprintf(response,
        "HTTP/1.1 404 Not Found\r\n"
        "Content-Type: text/html\r\n"
        "\r\n"
        "<h1>404 Page Not Found ❌</h1>"
    );
}

send(client_socket, response, strlen(response), 0);

    // 8. Close ONLY client (NOT server)
    closesocket(client_socket);
}
return 0;
}
