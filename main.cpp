#include "MyClass.h"
#include <QDateTime>
#include <QGuiApplication>
#include <QObject>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQuickItem>
#include <QQuickStyle>
#include <QQuickView>

int main(int argc, char *argv[])
{
	QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
	QGuiApplication app(argc, argv);
	QQuickStyle::setStyle("Material");
	QQmlApplicationEngine engine;
	engine.load(QUrl(QLatin1String("qrc:/main.qml")));
	if (engine.rootObjects().isEmpty())
	return -1;

	MyClass myClass(engine.rootObjects().first());

	engine.rootContext()->setContextProperty("",&myClass);

	return app.exec();
}

// int main(int argc, char *argv[])
//{
//	QGuiApplication app(argc, argv);

//	QQuickView view(QUrl::fromLocalFile("MyItem.qml"));

//	view.show();
//	return app.exec();
//}
