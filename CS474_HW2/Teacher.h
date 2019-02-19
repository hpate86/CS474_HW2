
#include "Employee.h"
#include "Course.h"
#pragma once

class Teacher : public Employee
{
private:
	vector<Course> teachingCourseHistory; //List of previous courses that a teacher had taught
	vector<Course> teachingCurrentCourses; //List of current courses that a teacher is teaching
	double salary;
public:

	Teacher();
	Teacher(string, string, double);
	Teacher(const Teacher &other);
	//Teacher(Teacher &&other);


	void addCourse(Course& cr);
	void endSemester();
	void paySalary();
	string getTeachersName();

	~Teacher();
};
