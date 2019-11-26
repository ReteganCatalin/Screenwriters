#include "Ideas.h"
#include "assert.h"

void test()
{
	Ideas* ideas = new Ideas();
	vector<Idea> testidea = ideas->GetIdeas();
	ideas->AddIdea("marin", "Cristina", "2");
	vector<Idea> testidea2 = ideas->GetIdeas();
	if (testidea.size() < testidea2.size())
	{
		assert(true);
	}
	else
	{
		assert(false);
	}
	try
	{
		ideas->AddIdea("marin", "Cristina", "2");
		assert(false);
	}
	catch (exception& e)
	{
		assert(strcmp(e.what(), "There is something with this description in this act don't copy") == 0);
	}
	try
	{
		ideas->AddIdea("marin", "Cristina", "4");
		assert(false);
	}
	catch (exception& e)
	{
		assert(strcmp(e.what(), "Empty description or wrong act") == 0);
	}
	ideas->AcceptPropose(0);
	vector<Idea> testidea3 = ideas->GetIdeas();
	assert(testidea3[0].GetStatus() == "accepted");
	try
	{
		ideas->AcceptPropose(0);
		assert(false);
	}
	catch (exception& e)
	{
		assert(strcmp(e.what(), "Already accepted") == 0);
	}
	try
	{
		ideas->AcceptPropose(1);
		assert(false);
	}
	catch (exception& e)
	{
		assert(strcmp(e.what(), "Already accepted") == 0);
	}
	


}

