#pragma once

class Salary
{
private:
	double NISTAX;
	double NHTTAX;
	double EDTAX;
	double PAYE;
	double grossSalary;
	double netSalary;

public:
	Salary()
	{

	}
	Salary(double NHTTAX, double EDTAX, double PAYE)
	{

	}
	/////////////////////////////////////////
	double getNISTAX()
	{
		return NISTAX;
	}
	void setNISTAX(double nistax)
	{
		this->NISTAX = nistax;
	}

	/////////////////////////////////////////
	double getNHTTAX()
	{
		return NHTTAX;
	}
	void setNHTTAX(double nhttax)
	{
		this->NHTTAX = nhttax;
	}
	////////////////////////////////////
	double getEDTAX()
	{
		return EDTAX;
	}
	void setEDTAX(double edtax)
	{
		this->EDTAX = edtax;
	}
	///////////////////////////////////
	double getPAYE()
	{
		return PAYE;
	}
	void setPAYE(double paye)
	{
		this->PAYE = paye;
	}
	///////////////////////////////////
	double getGrossSalary()
	{
		return grossSalary;
	}
	void setGrossSalary(double grosssalary)
	{
		this->grossSalary = grosssalary;
	}
	////////////////////////////////////
	double getNetSalary()
	{
		return netSalary;
	}
	void setNetSalary(double netsalary)
	{
		this->netSalary = netsalary;
	}

};
