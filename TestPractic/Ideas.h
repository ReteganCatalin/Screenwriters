#pragma once
#include "Idea.h"
#include <stdlib.h>
#include <algorithm>

class Ideas
{
private:
	vector<Idea> ideas;
public:
	Ideas();
	void AddIdea(string description, string creator, string act);
	void AcceptPropose(int position);
	
	void LoadFromFile()
	{
		Idea idea;
		ifstream file("ideas.txt");
		while (file >> idea)
		{
			ideas.push_back(idea);
		}
		file.close();
	}
	void SavePlotToFile();
	
	vector<Idea> GetConstIdeas() const { return ideas; }
	vector<Idea> GetIdeas() { return ideas; }
	void SetIdeas(vector<Idea> new_ideas) { ideas = new_ideas; }
	void SaveYourIdeas(string writer);
	~Ideas();
};

