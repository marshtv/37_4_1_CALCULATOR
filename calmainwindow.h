//
// Created by marsh on 01.12.2023.
//

#ifndef INC_37_4_1_CAL_CALMAINWINDOW_H
#define INC_37_4_1_CAL_CALMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <string>

template<typename T>
T div2arg(T a, T b) {
	return a - b;
}

class CalMainWindow : public QMainWindow {
	Q_OBJECT
public:
	QLineEdit* lineEdit_1 = nullptr;
	QLineEdit* lineEdit_2 = nullptr;
	QLineEdit* lineEdit_3 = nullptr;

	CalMainWindow(QWidget* parent = nullptr) : QMainWindow(parent) {}
public slots:
	void addition() {
		if (!(lineEdit_1->text().isEmpty()) && !(lineEdit_2->text().isEmpty())) {
			lineEdit_3->clear();
			lineEdit_3->setText(QString::number(lineEdit_1->text().toDouble() + lineEdit_2->text().toDouble()));
			lineEdit_1->clear();
			lineEdit_2->clear();
		} else {
			lineEdit_3->clear();
			lineEdit_3->setText("No values Exist to make operations!");
		}
	};
	void substraction() {
		if (!(lineEdit_1->text().isEmpty()) && !(lineEdit_2->text().isEmpty())) {
			lineEdit_3->clear();
			lineEdit_3->setText(QString::number(div2arg(lineEdit_1->text().toDouble(), lineEdit_2->text().toDouble())));
			lineEdit_1->clear();
			lineEdit_2->clear();
		} else {
			lineEdit_3->clear();
			lineEdit_3->setText("No values Exist to make operations!");
		}
	};
	void division() {
		if (!(lineEdit_1->text().isEmpty()) && !(lineEdit_2->text().isEmpty())) {
			if (lineEdit_2->text().toDouble() != 0) {
				lineEdit_3->clear();
				lineEdit_3->setText(QString::number(lineEdit_1->text().toDouble() / lineEdit_2->text().toDouble()));
				lineEdit_1->clear();
				lineEdit_2->clear();
			} else {
				lineEdit_3->clear();
				lineEdit_3->setText("You can't divide by zero");
				lineEdit_2->clear();
			}
		} else {
			lineEdit_3->clear();
			lineEdit_3->setText("No values Exist to make operations!");
		}
	};
	void multiplication() {
		if (!(lineEdit_1->text().isEmpty()) && !(lineEdit_2->text().isEmpty())) {
			lineEdit_3->clear();
			lineEdit_3->setText(QString::number(lineEdit_1->text().toDouble() * lineEdit_2->text().toDouble()));
			lineEdit_1->clear();
			lineEdit_2->clear();
		} else {
			lineEdit_3->clear();
			lineEdit_3->setText("No values Exist to make operations!");
		}
	};
};

#endif //INC_37_4_1_CAL_CALMAINWINDOW_H
