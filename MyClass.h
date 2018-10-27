#ifndef MYCLASS_H
#define MYCLASS_H

#include <QDebug>
#include <QObject>
#include <QQuickItem>

class MyClass : public QObject {
	Q_OBJECT

  public:
	MyClass(QObject *rootObject);

  private:
	QObject *m_rootObject;
  public slots:
	void cppSlot(const QVariant &v)
	{
	qDebug() << "Called the C++ slot with value:" << v;

	QQuickItem *item = qobject_cast<QQuickItem *>(v.value<QObject *>());
	qDebug() << "Item dimensions:" << item->width() << item->height();
	item->setWidth(item->width() + 10);
	}
};
#endif // MYCLASS_H
