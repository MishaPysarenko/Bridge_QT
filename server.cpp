#include "server.h"

Server::Server()
{
    if(this->listen(QHostAddress::Any, 65000))
    {
        //
    }
    else
    {
        //
    }
}

void Server::incomingConnetion(qintptr socketDescriptor)
{
    socket = new QTcpSocket;
    socket->setSocketDescriptor(socketDescriptor);
    connect(socket, &QTcpSocket::readyRead, this, &Server::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);

    Sockets.push_back(socket);
    //
}

void Server::slotReadyRead()
{
    socket = (QTcpSocket*)sender();
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_6);
    if(in.status() == QDataStream::Ok)
    {
        //
    }
    else
    {
        //error
    }
}

void Server::SendToClient(TGameLog log)
{
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_6);
    //out << log;
    socket->write(Data);
}
