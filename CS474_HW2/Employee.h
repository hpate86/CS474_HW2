/* Employee.h
   Name: Harshil Patel
   Date: 2/19/2019
   CS 474
   HW 2
*/


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