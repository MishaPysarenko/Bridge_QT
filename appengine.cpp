#include "appengine.h"
#include <QDebug>

appEngine::appEngine(QObject *parent)
    : QObject{parent}
{

}

void appEngine::CreateGame(short int iAmountPlayers)
{
    server = new Server;

    emit create();
}

void appEngine::JoinGame()
{
    client = new Client;
    emit join();
}

void appEngine::DeleteConnect()
{
    delete client;
    emit deletConnetc();
}

void appEngine::DeleteGame()
{
    delete server;
    emit deletGame();
}
