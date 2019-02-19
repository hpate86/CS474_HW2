#include "Student.h"

//Default constructor 
Student::Student() : Person()
{
	totalCredits = 0;
	currentCredits = 0;
}

//fully qualified constructor
Student::Student(string fn, string ln) : Person(fn, ln)
{
	//Person::Person(fn, ln);
	//Person::num++;
	totalCredits = 0;
	currentCredits = 0;
}

//Copy constructor
Student::Student(const Student &other) : Person(other)
{
	coursesHistory = other.coursesHistory;
	currentCourses = other.currentCourses;
	totalCredits = other.totalCredits;
	currentCredits = other.currentCredits;
}

//Move Constructor
/*Student::Student(Student &&other)
{
	Person::Person(other);
	coursesHistory = other.coursesHistory;
	currentCourses = other.currentCourses;
	totalCredits = other.totalCredits;
	currentCredits = other.currentCredits;
	other.totalCredits = 0;
	other.currentCredits = 0;
}*/

void Student::addCourse(Course& cr)
{
	//Add course to the current schedule
	currentCourses.push_back(cr);
	currentCredits = currentCredits + cr.getnumCreditHr();
}

void Student::endSemester()
{
	//at the end of the semester all the current cources are added to the courseHistory vector
	coursesHistory.insert(coursesHistory.end(), currentCourses.begin(), currentCourses.end());
	currentCourses.clear();
	currentCredits = 0;
}

// Credit: Professor Sean Deitz, Posted on piazza
string Student::enum_to_string(Status s)
{
	switch (s)
	{
	case Freshman:
		return "Freshman";
	case Sophomore:
		return "Sophomore";
	case Junior:
		return "Junior";
	case Senior:
		return "Senior";
	default:
		return "ERROR";
	}
}

string Student::currentStatus()
{
	//calculate total credits from the vactor - coursesHistory
	for (Course x : coursesHistory)
	{
		totalCredits = totalCredits + x.getnumCreditHr();
	}

	if (totalCredits >= 0 && totalCredits <= 30)
	{
		return enum_to_string(Freshman);
	}
	else if (totalCredits >= 31 && totalCredits <= 60)
	{
		return enum_to_string(Sophomore);
	}
	else if (totalCredits >= 61 && totalCredits <= 90)
	{
		return enum_to_string(Junior);
	}
	else if (totalCredits >= 91)
	{
		return enum_to_string(Senior);
	}
	else
	{
		return "Error";
	}
}

void Student::payTuition(double pricePerHour)
{
	balance = balance - (pricePerHour * currentCredits);
}


string Student::getStudentName()
{
	return Person::getName();
}

double Student::getBalance()
{
	return balance;
}

void Student::Debug()
{
	//print Currentcources
	cout << "currentCourses -> ";
	for (auto x : currentCourses)
	{
		cout << x.getCourseName() << ", " << x.getnumCreditHr() << " / ";
	}
	cout << endl;

	//print Currentcources
	cout << "coursesHistory -> ";
	for (auto x : coursesHistory)
	{
		cout << x.getCourseName() << ", " << x.getnumCreditHr() << " / ";
	}
	cout << endl;
}
Student::~Student()
{

}