#ifndef SERVER_H
#define SERVER_H
#include <QTcpServer>
#include <QTcpSocket>
#include <QVector>

class Server : public QTcpServer
{
public:
    Server();
    QTcpSocket* socket;
private:
    QVector<QTcpSocket*> Sockets;
    //
    void SendToClient();
public slots:
    void incomingConnetion(qintptr socketDescription);
    void slotReadyRead();
};

#endif // SERVER_H
