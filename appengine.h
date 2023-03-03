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

signals:

};

#endif // APPENGINE_H
