#pragma once
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class Writer
{
private:
	string name;
	string expertise;
public:
	Writer();
	friend istream& operator>>(istream& istream, Writer& writer);
	string GetName() { return name; }
	string GetExpertise() { return expertise; }
	~Writer();
};

