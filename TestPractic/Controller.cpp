#include "Controller.h"


void Controller::AcceptPropose(int position)
{
	ideas->AcceptPropose(position);
}

void Controller::SaveYourIdeas(string writer)
{
	this->ideas->SaveYourIdeas(writer);
}

void Controller::AddIdea(string description, string creator, string act)
{
	this->ideas->AddIdea(description, creator, act);
}
Controller::Controller()
{
}


Controller::~Controller()
{
}
