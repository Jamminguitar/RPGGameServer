#include <Scs.h>

class serverClient {
    static Scs::ServerPtr server;
    int serverConnections = 0;

    bool startServer() {
        //Initialize client-server library
        Scs::InitParams params;
        Scs::Initialize(params);

        //Create a server
        Scs::ServerParams serverParams;
        serverParams.port = "5656";
        serverParams.maxConnections = 100;
        serverParams.timeoutSeconds = 15.0;
        server = Scs::CreateServer(serverParams);

        server.StartListening();
    }

}