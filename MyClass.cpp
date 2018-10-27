#include "MyClass.h"

// MyClass::MyClass(QObject *parent) : QObject(parent)
//{

//}

MyClass::MyClass(QObject *rootObject) : m_rootObject(rootObject)
{
	QObject *item = rootObject->findChild<QObject *>("myRect");
	if (!item) {
		qDebug() << "ops";
	}
	QObject::connect(item, SIGNAL(qmlSignal(QVariant)), this,
			 SLOT(cppSlot(QVariant)));
}
