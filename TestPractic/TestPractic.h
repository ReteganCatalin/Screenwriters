#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TestPractic.h"

class TestPractic : public QMainWindow
{
	Q_OBJECT

public:
	TestPractic(QWidget *parent = Q_NULLPTR);

private:
	Ui::TestPracticClass ui;
};
