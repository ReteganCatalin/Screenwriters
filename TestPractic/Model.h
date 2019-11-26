#pragma once
#include <qabstracttablemodel>
#include "Controller.h"
class Model:public QAbstractTableModel
{
private:
	Controller* controller;
public:
	Model();
	vector<Idea> GetAllIdeas() { return controller->getAllIdeas(); }
	Controller* GetController() { return controller; }
	Model(Controller* controller): controller{controller}{}
	int columnCount(const QModelIndex &parent = QModelIndex()) const;
	int rowCount(const QModelIndex &parent = QModelIndex()) const;
	QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
	void updateMe() { emit this->layoutChanged(); }
	void AddIdea(string description, string creator, string act)
	{
		controller->AddIdea(description, creator, act);
	}
	void SaveYourIdeas(string writer);
	void SavePlot();
	void ProposedChanges(const QModelIndex& index);
	~Model();
};

