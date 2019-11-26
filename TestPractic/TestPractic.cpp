#include "TestPractic.h"
#include "qtextedit.h"
#include <qmessagebox.h>
TestPractic::TestPractic(Model* model,Writer writer,QWidget *parent)
	: QMainWindow(parent)
{
	this->writer = writer;
	this->this_model = model;
	ui.setupUi(this);
	this->setWindowTitle(QString::fromStdString(writer.GetName()));
	ui.tableView->setModel(model);
	setConnections();
}

void TestPractic::setConnections()
{
	if (writer.GetExpertise() != "Senior")
	{
		ui.accept->hide();
	}
	vector<Idea> ideas = this->this_model->GetAllIdeas();
	for (auto idea : ideas)
	{
		if (idea.GetCreator() == writer.GetName() && idea.GetStatus() == "accepted")
		{
			ui.Develop->setEnabled(true);
		}
	}
	connect(ui.propose, &QPushButton::clicked, this, &TestPractic::handlePropose);
	connect(ui.SavePlot, &QPushButton::clicked, this, &TestPractic::handleSavePlot);
	connect(ui.accept, &QPushButton::clicked, this, &TestPractic::handleAccept);
	connect(ui.Develop, &QPushButton::clicked, this, &TestPractic::handleDevelop);
}

void TestPractic::handleAccept()
{
	QModelIndex index = ui.tableView->selectionModel()->currentIndex();
	try
	{
		this->this_model->ProposedChanges(index);
		this->this_model->updateMe();
		vector<Idea> ideas = this->this_model->GetAllIdeas();
		for (auto idea : ideas)
		{
			if (idea.GetCreator() == writer.GetName() && idea.GetStatus() == "accepted")
			{
				ui.Develop->setEnabled(true);
			}
		}
	}
	catch (exception& exception)
	{
		QMessageBox::warning(this, "Error", exception.what());
	}


}

void TestPractic::handlePropose()
{
	string description = ui.lineEdit->text().toStdString();
	string act = ui.act->text().toStdString();
	try
	{
		this->this_model->AddIdea(description, writer.GetName(), act);
		this->this_model->updateMe();
	}
	catch (exception& exception)
	{
		QMessageBox::warning(this, "Error", exception.what());
	}
}

void TestPractic::handleDevelop()
{
	QLayoutItem *item;
	while ((item = ui.DevelopLayout->takeAt(0)))
		delete item;
	vector<Idea> ideas = this->this_model->GetAllIdeas();
	for (auto idea : ideas)
	{
		if (idea.GetCreator() == writer.GetName() && idea.GetStatus() == "accepted")
		{
			QPushButton* button =new QPushButton("&Save");
			QTextEdit* text = new QTextEdit();
			text->setText(QString::fromStdString(idea.GetDescription()));
			ui.DevelopLayout->layout()->addWidget(button);
			ui.DevelopLayout->layout()->addWidget(text);
		}
	}
	this->button_save=new QPushButton("&Save All");
	ui.DevelopLayout->layout()->addWidget(button_save);
	connect(this->button_save, &QPushButton::clicked, this, &TestPractic::handleSaveDevelop);

}

void TestPractic::handleSaveDevelop()
{
	this->this_model->SaveYourIdeas(writer.GetName());
}

void TestPractic::handleSavePlot()
{
	this->this_model->SavePlot();
}
