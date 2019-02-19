/* Course.h
   Name: Harshil Patel
   Date: 2/19/2019
   CS 474
   HW 2
*/

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
	bool operator<(const Course &rhs) const;

	~Course();
};