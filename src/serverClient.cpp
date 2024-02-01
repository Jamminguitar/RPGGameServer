#include "serverClient.h"


ServerClient::ServerClient() {
    serverConnections = 0;
}

void ServerClient::startServer() {
    //Initialize client-server library
    Scs::InitParams params;
    Scs::Initialize(params);

    //Create a server
    Scs::ServerParams serverParams;
    serverParams.port = "5656";
    serverParams.maxConnections = 100;
    serverParams.timeoutSeconds = 15.0;
    Scs::ServerPtr server = Scs::CreateServer(serverParams);
    server->StartListening();
    return;
}


int main() {
    ServerClient server = ServerClient();
    server.startServer();
    printf("Server started...");
    return 1;
}