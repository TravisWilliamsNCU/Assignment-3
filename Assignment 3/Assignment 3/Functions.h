#pragma once
#include <iostream>

#include <vector>
#include "Employee.h"
#include "Employer.h"
#include "Salary.h"
#include <string>
#include "IpayAdvice.h"



using namespace std;
/////////////////////// Global Variables //////////////////////
int max = 1000;
Employer* a = new Employer[max];
//////////////////////////////////////////////////////////////

/////////////////// Functions ////////////////////////////////////////
Employer* EmployerSalaryMenu(int max);
Empolyee* EmployeeSalaryMenu(int max);
void PrintSalaryDetails(Employer *a, int max);
Employer* EmployerSalaryCalculate(Employer *a, int max);
// void swap(Employer *xp, Employer *yp);
Employer* EmployeeSort(Employer *a, int max);
//////////////////////////////////////////////////////////////////////



//////////////////////////////// Main Menu ////////////////////////////////////
void PayrollMenu(int max)
{
	
	int opt = 0;
	do {
		cout << "SMCM PAY ROLL" << endl;
		cout << " SYSTEM" << endl;
		cout << "MENU" << endl;
		cout << "[1] Employer Salary" << endl;
		cout << "[2] Employee Salary" << endl;
		cout << "[3] Print PayAdvice" << endl;
		cout << "[4] Print All" << endl;
		cout << "[5] Exit" << endl;
		cin >> opt;
	

	if (opt == 1)
	{
		EmployerSalaryMenu(max);
	}
	else if (opt == 2)
	{
		EmployeeSalaryMenu(max);
	}
	else if (opt == 3)
	{

	}
	else if (opt == 4)
	{

		EmployeeSort(a,max);

	}
	} while (opt < 4);
}

/////////////////////////////////////// Main Menu End ////////////////////////////////////////////

Employer* EmployerSalaryMenu(int max)
{
	

	int option;
	bool loop = true;
	while (loop)
	{

		for (int i = 0; i < max; i++)
		{
			cout << "\t\t Enter Employer Information" << endl;
			string fname;
			cout << "Enter Firstname " << endl;
			cin >> fname;
			a[i].setfirstname(fname);

			string lname;
			cout << "Enter Lastname" << endl;
			cin >> lname;
			a[i].setlastname(lname);

			int empID;
			cout << "Enter Employer ID" << endl;
			cin >> empID;
			a[i].setEmployerID(empID);

			double grosssalary;
			cout << "Enter Employer Salary" << endl;
			cin >> grosssalary;
			a[i].setGrossSalary(grosssalary);


			//double gross = a[i].getGrossSalary();
			double nis = grosssalary* 0.025;
			double nht = grosssalary * 0.03;
			double edtax = grosssalary * 0.035;
			double netsalary = grosssalary - (nis + nht + edtax);

			Salary n;
			n.setGrossSalary(grosssalary);
			n.setNISTAX(nis);
			n.setNHTTAX(nht);
			n.setEDTAX(edtax);
			n.setNetSalary(netsalary);
			a[i].setEmployerSalary(n);
			
			////////////// Exit Test ///////////////////////
			cout << "Enter -1 to exit and 1 to continue" << endl;
			cin >> option;

			if (option == 1)
			{
				continue;
			}
			else
			{
				loop = false;
				break;
			}
		}
	}

		return a;
	}

Empolyee* EmployeeSalaryMenu(int max)
{
	Empolyee* b = new Empolyee[max];
	bool loop = true;

	while(loop)
	{
		for (int i = 0; i < max; i++)
		{
			cout << "\t\t Enter Employee Infromation" << endl;
			string fname;
			cout << "Enter First name" << endl;
			cin >> fname;
			b[i].setfirstname(fname);

			string lname;
			cout << "Enter Last Name" << endl;
			cin >> lname;
			b[i].setlastname(lname);

			string position;
			cout << "Enter Employee Position" << endl;
			cin >> position;
			b[i].setPosition(position);

			int empID;
			cout << "Enter Employee ID" << endl;
			cin >> empID;
			b[i].setEmployeeID(empID);

			double grossSalary;
			cout << "Enter Employee Salary" << endl;
			cin >> grossSalary;
			b[i].setGrossSalary(grossSalary);
		}
	}

	return b;
}

void swap(Employer *xp, Employer *yp)
{
	Employer temp = *xp;
	*xp = *yp;
	*yp = temp;
}

Employer* EmployeeSort(Employer *a, int max)
{	
	
	int minposition;
	for (int i = 0; i < max - 1; i++) {
		minposition = i;
		for (int j = i + 1; j < max; j++) {
			if (a[j].getlastname() < a[minposition].getlastname())
				minposition = j;
		}
		if (minposition != i) {
			swap(a[i], a[minposition]);
		}
	}
	for (int i = 0; i < max; i++)
	{
		cout << "Employee Details" << endl;
		cout << "Employer Name: " << a[i].getlastname() << a[i].getlastname() << endl;
		cout << "Employer ID: " << a[i].getEmployerID() << endl;
		cout << "Employer Gross Salary: " << a[i].getGrossSalary() << endl;
		cout << "Employer NIS: " << a[i].getNISTAX() << endl;
		cout << "Employer NHT: " << a[i].getNHTTAX() << endl;
		cout << "Employer EDTAX: " << a[i].getEDTAX() << endl;
		cout << "Employer Net Salary: " << a[i].getNetSalary() << endl;
	}

	return a;
}

