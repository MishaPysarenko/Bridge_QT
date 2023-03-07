#include "appengine.h"

appEngine::appEngine(QObject *parent)
    : QObject{parent}
{

}

bool appEngine::bIsCreateGame(short int iAmountPlayers)
{
    Server *server = new Server;
    return true;
}

bool appEngine::bIsJoinGame()
{
    Client *client = new Client;

    return true;
}
