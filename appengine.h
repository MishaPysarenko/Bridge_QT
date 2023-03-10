#ifndef APPENGINE_H
#define APPENGINE_H

#include <QObject>
#include <QtQml>
#include "server.h"
#include "client.h"

class appEngine : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Server *server;
    Client *client;
public:
    explicit appEngine(QObject *parent = nullptr);
    Q_INVOKABLE void bIsCreateGame(short int iAmountPlayers = 2);
    Q_INVOKABLE void bIsJoinGame();
signals:
    void erorr();
    void onCreate();
    void onJoin();
};

#endif // APPENGINE_H
