/* Teacher.cpp
   Name: Harshil Patel
   Date: 2/19/2019
   CS 474
   HW 2
*/

#include "Teacher.h"

Teacher::Teacher() :Employee()
{
	salary = 0.00;
}
Teacher::Teacher(string fn, string ln, double sal) : Employee(fn, ln, sal)
{
	salary = sal;
}

Teacher::Teacher(const Teacher &other) : Employee(other)
{
	teachingCourseHistory = other.teachingCourseHistory;
	teachingCurrentCourses = other.teachingCurrentCourses;
	salary = other.salary;
}

/*
Teacher::Teacher(Teacher &&other)
{
	Employee::Employee(other);
	salary = other.salary;
	other.salary = 0;
}*/


void Teacher::addCourse(Course& cr)
{
	//Add course to the current schedule of the teacher
	teachingCurrentCourses.push_back(cr);
}

void Teacher::endSemester()
{
	//at the end of the semester all the current cources are added to the courseHistory vector
	teachingCourseHistory.insert(teachingCourseHistory.end(), teachingCurrentCourses.begin(), teachingCurrentCourses.end());
	teachingCurrentCourses.clear();
}

void Teacher::paySalary()
{
	balance = balance + (salary * (teachingCurrentCourses.size()));
}

string Teacher::getTeachersName()
{
	return Person::getName();
}

Teacher::~Teacher()
{

}