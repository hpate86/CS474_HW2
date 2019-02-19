/* Person.h
   Name: Harshil Patel
   Date: 2/19/2019
   CS 474
   HW 2
*/


#include<iostream>
#include<string>
#include<vector>
#include <algorithm> 
using namespace std;

#pragma once

class Person
{
private:
	string firstName;
	string lastName;
	int UIN;

protected:
	double balance;

public:
	string className = "Person";
	static int num;

	//Default constructor
	Person();

	//fully qualified constructor
	Person(string fn, string ln);

	//Copy constructor
	Person(const Person& other);

	//Move constructor
	//Person(Person &&);


	static int totalPopulation();
	void sayName();

	int getUIN();
	double getBalance();
	string getName();

	bool operator<(const Person &rhs) const;

	//destructor
	~Person();
};
