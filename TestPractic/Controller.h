#pragma once
#include "Writers.h"
#include "Ideas.h"
class Controller
{
private:
	Ideas* ideas;
public:
	Controller();
	Controller(Ideas* ideas):ideas{ideas}{}


	void AcceptPropose(int position);
	void SaveYourIdeas(string writer);
	void AddIdea(string description, string creator, string act);
	Ideas* GetIdeas() { return ideas; }
	void SavePlot() { ideas->SavePlotToFile(); }
	vector<Idea> getAllIdeas() { return ideas->GetIdeas(); }
	~Controller();
};

