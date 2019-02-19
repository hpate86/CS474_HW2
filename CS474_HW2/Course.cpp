#include"Course.h"

//Default constructor
Course::Course()
{
	courseName = "abc";
	numCreditHr = 0;
}

//fully qualified constructor
Course::Course(string coursename, int credithr)
{
	courseName = coursename;
	numCreditHr = credithr;
}

//Copy Constructor
Course::Course(const Course& other)
{
	courseName = other.courseName;
	numCreditHr = other.numCreditHr;
}

//Move Constructor
/*Course::Course(Course &&other)
{
	courseName = other.courseName;
	numCreditHr = other.numCreditHr;
	other.courseName = "";
	other.numCreditHr = 0;
}*/


string Course::getCourseName()
{
	return courseName;
}

int Course::getnumCreditHr()
{
	return numCreditHr;
}

bool Course::operator<(const Course &rhs) const
{
	return courseName < rhs.courseName;
}




Course::~Course()
{

}
