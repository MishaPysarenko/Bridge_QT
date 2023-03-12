#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "appengine.h"

int main(int argc, char *argv[])
{
    //QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    //qmlRegisterType<appEngine>("Glogic", 1, 0, "AppEngine");

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/Bridge/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,&app, [url](QObject *obj, const QUrl &objUrl)
    {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    appEngine AppEngine;

    QQmlContext* rootContext = engine.rootContext();
    rootContext->setContextProperty("logics",&AppEngine);

    //engine.rootContext()->setContextProperty("logics",&AppEngine);
    return app.exec();
}
