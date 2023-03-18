#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "appengine.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    appEngine AppEngine;

    qmlRegisterType<appEngine>("logic", 1, 0, "AppEngine");



    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/Bridge/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,&app, [url](QObject *obj, const QUrl &objUrl)
    {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);



    //appEngine AppEngine;

    //QQmlContext* rootContext = engine.rootContext();
    //rootContext->setContextProperty("Logics",&AppEngine);



    return app.exec();
}
