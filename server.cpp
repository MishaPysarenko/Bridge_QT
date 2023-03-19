#include "server.h"
#include "SettingMacros.h"
#include <QDebug>
Server::Server()
{

}

bool Server::CreateGame()
{
    socket = new QTcpSocket;
    if(this->listen(QHostAddress::Any, PORT))return true;
    return false;
}

void Server::incomingConnetion(qintptr socketDescriptor)
{

    socket->setSocketDescriptor(socketDescriptor);
    connect(socket, &QTcpSocket::readyRead,this,&Server::slotReady);
    connect(socket, &QTcpSocket::disconnected,socket,&QTcpSocket::deleteLater);

    Sockets.push_back(socket);
    qDebug() << "have connect";
}

void Server::slotReady()
{
    socket = (QTcpSocket*)sender();
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_6);
    if(in.status() == QDataStream::Ok)
    {
        qDebug()<<"123";
        QString str;
        in >> str;
        qDebug() << str;
    }
    else
    {
        qDebug() << "erorr";
    }
}

void Server::SendToClient(TGameLog log)
{
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_6);
    out << "123";
    for(int i = 0; i < Sockets.size(); i++)
    {
        Sockets[i]->write(Data);
    }
}

void Server::DeleteGame()
{
    for(int i = 0; i < Sockets.size(); i++)
    {
        Sockets[i]->deleteLater();
    }
}
