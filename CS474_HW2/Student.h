
#include "Person.h"
#include "Course.h"
#pragma once


class Student : public Person
{
private:
	vector<Course> coursesHistory; //List of previous courses that a student has taken
	vector<Course> currentCourses; //List of current courses that a student is taking
	int totalCredits;
	int currentCredits;


public:

	enum Status
	{
		Freshman, Sophomore, Junior, Senior
	};

	Student();
	Student(string fn, string ln);
	Student(const Student &other);
	//Student(Student &&other);

	string enum_to_string(Status s);
	void addCourse(Course& cr);
	void endSemester();
	string currentStatus();
	string getStudentName();
	void payTuition(double);
	double getBalance();

	void Debug();
	~Student();

};