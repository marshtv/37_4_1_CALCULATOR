#include <QApplication>
#include <QPushButton>
#include <string>
#include "calmainwindow.h"
#include "./ui_cal.h"

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	CalMainWindow window(nullptr);
	Ui::MainWindow cal;
	cal.setupUi(&window);
	window.lineEdit_1 = cal.lineEdit_1;
	window.lineEdit_2 = cal.lineEdit_2;
	window.lineEdit_3 = cal.lineEdit_3;
	window.resize(480, 640);
	window.show();
	return QApplication::exec();
}
