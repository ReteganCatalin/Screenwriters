#include "Ideas.h"



Ideas::Ideas()
{
	LoadFromFile();
}

void Ideas::AddIdea(string description, string creator, string act)
{
	// This function creates an Idea object and tries to insert it into the vector
	// param string-description,creator,act parameters for the idea object
	// precond:ideas-vector<idea>,description,creator string, act string(that can be modifiied to in and it is betwwen 1 and 3
	// postcond:if idea is correct and there is no idea with the same description in the same act ideas+idea(description,creator,act)
	//else throw an error
	Idea ideal = Idea(description, creator, act);
	for (auto idea : ideas)
	{
		if (idea.GetDescription() == description && idea.GetAct() == stoi(act))
		{
			throw exception("There is something with this description in this act don't copy");
		}
	}
	ideas.push_back(ideal);
}

void Ideas::AcceptPropose(int position)
{
	// This function verifies if an idea is accepted
	// param int position
	// precond:0<=position<vector.size()
	// postcond:if the idea is not accepted set it to be accepted
	//else throw an error
	if (ideas[position].GetStatus() == "accepted")
	{
		throw exception("Already accepted");
	}
	else
	{
		ideas[position].SetStatus();
	}
}


void Ideas::SavePlotToFile()
{
	ofstream outfile("plot.txt");
	sort(ideas.begin(), ideas.end(), [](Idea idea1, Idea idea2) {return idea1.GetAct() < idea2.GetAct(); });
	int act = 0;
	for (auto idea : ideas)
	{
		if (act < idea.GetAct())
		{
			act = idea.GetAct();
			outfile << "Act " << idea.GetAct() << "\n";
		}
		if (idea.GetStatus() == "accepted")
		{
			outfile << idea << "\n";
		}
	}
	outfile.close();
}

void Ideas::SaveYourIdeas(string writer)
{
	string writer_file = writer + ".txt";
	ofstream outfile(writer_file);
	for (auto idea : ideas)
	{
		if (idea.GetCreator() == writer)
		{
			outfile << idea << "\n";
		}
	}
}

Ideas::~Ideas()
{
}
