#ifndef CLIENT_H
#define CLIENT_H
#include <QTcpSocket>
#include "SettingMacros.h"

class Client
{
public:
    Client();
public slots:
    void send(QByteArray);
signals:

};

#endif // CLIENT_H
