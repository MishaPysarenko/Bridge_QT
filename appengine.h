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

public:
    explicit appEngine(QObject *parent = nullptr);

public slots:
    //
    void ErorrConnect();
    void ErorrCreate();

    //
    void JoinGame();
    void CreateGame(short int iAmountPlayers = 2);
    void DeleteConnect();
    void DeleteGame();

    //



signals:

    void erorr();

    void create();
    void join();
    void deletGame();
    void deletConnetc();


};

#endif // APPENGINE_H
