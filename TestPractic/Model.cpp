#include "Model.h"



Model::Model()
{
}



int Model::columnCount(const QModelIndex & parent) const
{
	return 4;
}

int Model::rowCount(const QModelIndex & parent) const
{
	return controller->GetIdeas()->GetIdeas().size();
}

QVariant Model::data(const QModelIndex & index, int role) const
{
	int row = index.row();
	int column = index.column();
	Idea idea = controller->GetIdeas()->GetIdeas()[row];
	if (role == Qt::DisplayRole)
	{
		switch (column)
		{
		case 0:
			return QString::fromStdString(idea.GetDescription());
		case 1:
			return QString::fromStdString(idea.GetStatus());
		case 2:
			return QString::fromStdString(idea.GetCreator());
		case 3:
			return QString::fromStdString(to_string(idea.GetAct()));
		}
	}
	return QVariant();
}


void Model::SaveYourIdeas(string writer)
{
	this->controller->SaveYourIdeas(writer);
}

void Model::SavePlot()
{
	controller->SavePlot();
}

void Model::ProposedChanges(const QModelIndex& index)
{
	int position = index.row();
	controller->AcceptPropose(position);

}

Model::~Model()
{
}
