/* Person.h
   Name: Harshil Patel
   Date: 1/30/2019
   CS 474
*/

#include<iostream>
#include<string>
#include<vector>
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

	//destructor
	~Person();
};
