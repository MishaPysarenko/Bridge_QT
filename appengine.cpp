#include "appengine.h"
#include <QDebug>

appEngine::appEngine(QObject *parent)
    : QObject{parent}
{

}

void appEngine::bIsCreateGame(short int iAmountPlayers)
{
    server = new Server;
    delete server;
    nCounter--;
}

void appEngine::bIsJoinGame()
{
    client = new Client;
    delete client;
    nCounter++;
    //qDebug() << "bIsJoinGame";
    emit join();
}

int appEngine::get()
{
    return nCounter;
}
