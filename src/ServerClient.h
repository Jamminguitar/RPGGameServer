#include "../dependencies/Scs/Source/Scs.h"

class ServerClient {
private:
    static Scs::ServerPtr server;
    int serverConnections;

public:
    ServerClient();
    void startServer();

};

