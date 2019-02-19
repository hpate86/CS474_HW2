#include "Employee.h"

Employee::Employee() : Person()
{
	salary = 0.00;
}
Employee::Employee(string fn, string ln, double sal) : Person(fn, ln)
{
	salary = sal;
}

Employee::Employee(const Employee &other) : Person(other)
{
	salary = other.salary;
}

/*Employee::Employee(Employee &&other)
{
	Person::Person(other);
	salary = other.salary;
	other.salary = 0;
}*/


string Employee::getEmployeeName()
{
	return Person::getName();
}


void Employee::paySalary()
{
	balance = balance + salary;
}

Employee::~Employee()
{

}