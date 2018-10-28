#pragma once
#include "iostream"

using namespace std;

class person
{
private:
	string firstname;
	string lastname;
public:
	string getfirstname()
	{
		return firstname;
	}

	void setfirstname(string fname)
	{
		this->firstname = fname;
	}
	string getlastname()
	{
		return lastname;
	}
	void setlastname(string lname)
	{
		this->lastname = lname;
	}
};
