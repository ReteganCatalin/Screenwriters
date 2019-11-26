#pragma once
#include "Writer.h"
class Writers
{
private:
	vector<Writer> writers;
public:
	Writers();
	void LoadFromFile()
	{
		Writer writer;
		ifstream file("writers.txt");

		while (file >> writer)
		{
			writers.push_back(writer);
		}
		file.close();

	}
	vector<Writer> GetConstWriters()const { return writers; }
	~Writers();
};

