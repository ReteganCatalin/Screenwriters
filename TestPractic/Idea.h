#pragma once
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
class Idea
{
private:
	string descripition;
	string status;
	string creator;
	int act;
public:
	Idea();
	Idea(string description, string creator, string act)
	{
		int actual_act = stoi(act);
		if (descripition.size() != 0 || (actual_act > 0 && actual_act<=3))
		{
			this->descripition = description;
			this->status = "proposed";
			this->creator = creator;
			this->act = actual_act;
			
		}
		else
		{
			throw exception("Empty description or wrong act");
		}
	}
	string GetDescription() { return this->descripition; }
	string GetStatus() { return this->status; }
	string GetCreator() { return this->creator; }
	int GetAct() { return this->act; }
	void SetStatus() { this->status = "accepted"; }
	void SetDescription(string descripition) { this->descripition = descripition; }
	friend istream& operator>>(istream& input_stream, Idea& idea);
	friend ostream& operator<<(ostream& output_stream, Idea& idea);
	~Idea();
};

