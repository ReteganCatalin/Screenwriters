#include "TestPractic.h"
#include <QtWidgets/QApplication>
#include "Writers.h"
#include "Controller.h"
#include "Ideas.h"
#include "Model.h"
#include "Testing.h"

int main(int argc, char *argv[])
{
	test();
	QApplication a(argc, argv);
	Writers* writers = new Writers();
	Ideas* ideas = new Ideas();
	Controller* controler = new Controller(ideas);
	Model* model = new Model{ controler };
	for (auto writer : writers->GetConstWriters())
	{
		TestPractic* w=new TestPractic(model,writer);
		w->show();
	}
	
	return a.exec();
}
