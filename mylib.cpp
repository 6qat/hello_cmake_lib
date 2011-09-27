#include "mylib.h"
#include <QString>
#include <QDebug>

int soma(int a, int b)
{
	QString s("Dummy string");
	qDebug() << s;
	return a + b;
}