#include "appengine.h"

appEngine::appEngine(QObject *parent)
    : QObject{parent}
{

}

void appEngine::bIsCreateGame(short int iAmountPlayers)
{
    server = new Server;
    delete server;
}

void appEngine::bIsJoinGame()
{
    client = new Client;
    delete client;
    emit onJoin();
}
