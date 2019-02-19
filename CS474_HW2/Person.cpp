/* Person.cpp
   Name: Harshil Patel
   Date: 1/30/2019
   CS 474
*/

#include"Person.h"

int Person::num = 0;

//Default
Person::Person()
{
	firstName = "";
	lastName = "";
	balance = 0;

}

// fully qualified constructor
Person::Person(string fn, string ln)
{
	num++;
	firstName = fn;
	lastName = ln;
	balance = 0;
}

//Copy Constructor
Person::Person(const Person& other)
{
	firstName = other.firstName;
	lastName = other.lastName;
	balance = 0;
	num++;
}
/*
//Move Constructor
Person::Person(Person &&p)
{
	firstName = p.firstName;
	lastName = p.lastName;
	p.firstName = "";
	p.lastName = "";
	num++;
}*/

//TotalPouplation, return total number of objects that are of the class
int Person::totalPopulation()
{
	return num;
}

//SayName, print first and last name with space in middle
void Person::sayName()
{
	cout << firstName << " " << lastName << endl;
}

string Person::getName()
{
	string tmp;
	tmp = firstName + " " + lastName;

	return tmp;
}

int Person::getUIN()
{
	return UIN;
}
double Person::getBalance()
{
	//Return current blacnce of the person account
	return balance;
}

//Destructor
Person::~Person()
{
	num--;
}


