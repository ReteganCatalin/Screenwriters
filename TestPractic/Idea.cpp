#include "Idea.h"



Idea::Idea()
{
}


Idea::~Idea()
{
}
vector<string> tokenizeIdea(string input)
{
	vector<string> tokens;
	stringstream spliter(input);
	string token;
	while (getline(spliter, token, ','))
	{
		tokens.push_back(token);
	}
	return tokens;
}
istream & operator>>(istream & input_stream, Idea & idea)
{
	// TODO: insert return statement her
	string get_input;
	getline(input_stream, get_input);
	vector<string> tokens = tokenizeIdea(get_input);
	if (tokens.size() != 0)
	{
		idea.descripition = tokens[0];
		idea.status = tokens[1];
		idea.creator = tokens[2];
		idea.act = stoi(tokens[3]);
	}
	return input_stream;
}

ostream & operator<<(ostream & output_stream, Idea & idea)
{
	// TODO: insert return statement here
	output_stream << idea.descripition << " [" << idea.creator << " ]";
	return output_stream;
}
