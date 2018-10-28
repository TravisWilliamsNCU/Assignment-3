#pragma once

#include <iostream>
#include "Salary.h"
#include "IpayAdvice.h"
#include "Person.h"


using namespace std;


class Empolyee : public person, public IpayAdvice, public Salary
{
private:
	int EmployeeID;
	string Position;
	Salary EmployeeSalary;
	
public:
	int getEmployeeID()
	{
		return EmployeeID;
	}
	void setEmployeeID(int employeeId)
	{
		this->EmployeeID = employeeId;
	}
	///////////////////////////////////
	string getPosition()
	{
		return Position;
	}
	void setPosition(string position)
	{
		this->Position = position;
	}
	////////////////////////////////////
	Salary getEmployeeSalary()
	{
		return EmployeeSalary;
	}
	void setEmployeeSalary(Salary employeesalary)
	{
		this->EmployeeSalary = employeesalary;
	}
	////////////////////////////////////////////

	void PrintSalaryDetails()
	{

	}
	//////////////////////////////////////////////////////////
};


