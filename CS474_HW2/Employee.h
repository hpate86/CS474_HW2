
#include "Person.h"
#pragma once


class Employee : public Person
{
protected:
	double salary;

public:

	Employee();
	Employee(string, string, double);
	Employee(const Employee &other);
	//Employee(Employee &&other);

	virtual void paySalary();
	string getEmployeeName();
	~Employee();

};