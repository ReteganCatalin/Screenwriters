#include "Writer.h"

Writer::Writer()
{
}


Writer::~Writer()
{
}
vector<string> tokenizeWriter(string input)
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
istream & operator>>(istream & input_stream, Writer & writer)
{
	string input;
	getline(input_stream, input);

	vector<string> tokens = tokenizeWriter(input);
	if (tokens.size() != 0)
	{
		writer.name = tokens[0];
		writer.expertise = tokens[1];
	}
	return input_stream;


}
