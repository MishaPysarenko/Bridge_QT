#ifndef APPENGINE_H
#define APPENGINE_H

#include <QObject>

#include "server.h"
#include "client.h"

class appEngine : public QObject
{
    Q_OBJECT
public:
    explicit appEngine(QObject *parent = nullptr);
    Q_INVOKABLE bool bIsCreateGame(short int iAmountPlayers = 2);
    Q_INVOKABLE bool bIsJoinGame();
signals:

};

#endif // APPENGINE_H
