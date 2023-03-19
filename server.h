#ifndef SERVER_H
#define SERVER_H
#include <QTcpServer>
#include <QTcpSocket>
#include <QVector>
#include "tgamelog.h"

class Server : public QTcpServer
{
public:
    Server();
    QTcpSocket* socket;
private:
    QVector<QTcpSocket*> Sockets;
    QByteArray Data;
    void SendToClient(TGameLog log);
public slots:
    bool CreateGame();
    void incomingConnetion(qintptr socketDescription);
    void slotReady();
    void DeleteGame();
signals:
    void createErorr();
};

#endif // SERVER_H
