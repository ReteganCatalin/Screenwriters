#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TestPractic.h"
#include "Model.h"

class TestPractic : public QMainWindow
{
	Q_OBJECT
private slots:


	void handleSavePlot();
	void handleAccept();
	void handlePropose();
	void handleDevelop();
	void handleSaveDevelop();
public:
	TestPractic(Model* model,Writer writer,QWidget *parent = Q_NULLPTR);

private:
	Ui::TestPracticClass ui;
	Model* this_model;
	Writer writer;
	QPushButton* button_save;
	void setConnections();


};
