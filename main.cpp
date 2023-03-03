#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "appengine.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/Bridge/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,&app, [url](QObject *obj, const QUrl &objUrl)
    {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);
    appEngine AppEngine;
    engine.rootContext()->setContextProperty("logics",&AppEngine);
    return app.exec();
}
