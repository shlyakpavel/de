#include "test.h"
#include <QtCore>

test::test(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	ui.checkBox_5->setCheckState(Qt::PartiallyChecked);

	QFile file("Resources/style.css");
	file.open(QIODevice::ReadOnly);
	QTextStream in(&file); 
	QString s = in.readAll();

	qApp->setStyleSheet(s);
}

test::~test()
{

}
