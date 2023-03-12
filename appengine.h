#ifndef APPENGINE_H
#define APPENGINE_H

#include <QObject>
#include <QtQml>
#include <QString>
#include "server.h"
#include "client.h"

class appEngine : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Server *server;
    Client *client;
    int nCounter = 0;

public:
    explicit appEngine(QObject *parent = nullptr);
    Q_INVOKABLE int get();

public slots:
    void bIsJoinGame();
    void bIsCreateGame(short int iAmountPlayers = 2);

signals:
    void erorr();
    void Create();
    void join();
};

#endif // APPENGINE_H
