#pragma once
#include "IpayAdvice.h"
#include "Salary.h"
#include <string>
#include "Person.h"
#include "Functions.h"

class Employer : public IpayAdvice, public person, public Salary
{
private:
	int EmployerID;
	Salary EmployerSalary;
	////////////////////////////////////
public:
	int getEmployerID()
	{
		return EmployerID;
	}
	void setEmployerID(int employerID)
	{
		this->EmployerID = employerID;
	}
	///////////////////////////////
	Salary getEmployerSalary()
	{
		return EmployerSalary;
	}
	void setEmployerSalary(Salary employerSalary)
	{
		this->EmployerSalary = employerSalary;
	}
	////////////////////////////////////////////
	void PrintSalaryDetails(Employer *a, int max)
	{
			
	
	
	}
	
};
