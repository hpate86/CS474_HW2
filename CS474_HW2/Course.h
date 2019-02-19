#include<iostream>
#include<string>
#include<vector>
using namespace std;

#pragma once

class Course
{
private:
	string courseName;
	int numCreditHr;

public:

	Course();
	Course(string, int);
	Course(const Course& other);
	//Course(Course &&other);

	string getCourseName();
	int getnumCreditHr();

	~Course();
};