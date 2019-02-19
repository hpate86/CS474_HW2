/* main.cpp
   Name: Harshil Patel
   Date: 2/19/2019
   CS 474
   HW 2
*/

#include"Student.h"
#include"Person.h"
#include"Course.h"
#include"Employee.h"
#include"Teacher.h"

int main()
{
	//------------------------------------------------------------------
	//Homework 1
	/*
	vector<Person*> v1;
	Person p1;
	//1
	cout << p1.totalPopulation() << endl;
	//2
	cout << p1.className << endl;
	//3
	Person p2("Ada", "Lovelace");
	v1.push_back(&p2);
	//4
	for (int i = 0; i < v1.size(); i++)
	{
		v1.at(i)->sayName();
	}
	//5
	cout << p2.totalPopulation() << endl;
	//6
	p1.className = "Homo Sapiens";
	//7
	Person p3("Alan", "Turing");
	v1.push_back(&p3);
	//8
	for (int i = 0; i < v1.size(); i++)
	{
		v1.at(i)->sayName();
	}
	//9
	cout << p3.totalPopulation() << endl;
	//10
	cout << p1.className << endl;
	//11
	Person *p4 = new Person("Lynn", "Conway");
	//12
	p4->sayName();
	//13
	cout << p4->totalPopulation() << endl;
	//14
	delete p4;
	//15
	cout << p3.totalPopulation() << endl;*/


	//------------------------------------------------------------------
	//Homework 2

	string firstname;
	string lastname;
	int userInput;
	double salary;
	string courseName;
	string courseName1;
	string studentName;
	string studentName1;
	int courseCredit;
	vector<Person> personVector;
	vector<Teacher> teacherVector;
	vector<Employee> employeeVector;
	vector<Course> courseVector;
	vector<Student> studentVector;

	
	//1
	cout << Person::num << endl;

	//2
	Course c1("CS 100", 1);
	courseVector.emplace_back(c1);

	//3
	Course c2("CS 474", 3);
	courseVector.emplace_back(c2);

	//4
	Student s1("Allison", "Doe");
	studentVector.emplace_back(s1);
	personVector.emplace_back(s1);

	//5
	s1.addCourse(c1);

	//6
	Teacher t1("Jennifer", "Lawrence", 20000);
	teacherVector.emplace_back(t1);
	personVector.emplace_back(t1);

	//7 
	t1.addCourse(c2);

	//8
	cout << Person::num << endl;

	//9
	s1.payTuition(10000);

	//10
	t1.paySalary();

	//11
	s1.endSemester();
	t1.endSemester();

	//12
	while (true)
	{
		cout << "What operation would you like to perform (0 for help)? ";
		cin >> userInput;

		if (userInput == -1)
		{
			break;
		}
		else if (userInput == 0)
		{
			cout << "On -1, end the loop" << endl
				<< "On 0, Display this menu again." << endl
				<< "On 1, create a new student." << endl
				<< "On 2, create a new employee." << endl
				<< "On 3, create a new teacher." << endl
				<< "On 4, create a new course." << endl
				<< "On 5, enroll a student in a course." << endl
				<< "On 6, assign a teacher to a course." << endl
				<< "On 7, output the total number of people in the database, followed by their names, one per line, in alphabetical order by last name. " << endl
				<< "On 8, output the names of each of the courses, in alphabetical order." << endl
				<< "On 9, charge tuition for all students." << endl
				<< "On 10, pay salary to all employees." << endl
				<< "On 11, end the semester for all students and teachers." << endl
				<< "On 12, output the balance for a person." << endl << endl;
		}
		else if (userInput == 1)
		{
			cout << "What is the student’s first name? ";
			cin >> firstname;

			cout << "What is the student’s last name? ";
			cin >> lastname;
			Student newStudent(firstname, lastname);
			studentVector.emplace_back(newStudent);

			Person p2 = newStudent; //--------------------
			personVector.emplace_back(p2);
		}
		else if (userInput == 2)
		{
			cout << "What is the employee’s first name? ";
			cin >> firstname;

			cout << "What is the employee’s last name? ";
			cin >> lastname;

			cout << "What is the employee’s salary?";
			cin >> salary;

			Employee newEmployee(firstname, lastname, salary);
			employeeVector.emplace_back(newEmployee);

			Person p3 = newEmployee;  //-----------------------------
			personVector.emplace_back(p3);
		}
		else if (userInput == 3)
		{
			cout << "What is the teacher’s first name? ";
			cin >> firstname;

			cout << "What is the teacher’s last name? ";
			cin >> lastname;

			cout << "What is the teacher’s salary?";
			cin >> salary;

			Teacher newTeacher(firstname, lastname, salary);
			teacherVector.push_back(newTeacher);

			//Person p4 = Teacher(firstname, lastname, salary);
			Person p4 = newTeacher;  //--------------------------------
			personVector.push_back(p4);
		}
		else if (userInput == 4)
		{
			cout << "What is the name of the course? ";
			cin >> courseName;
			cin >> courseName1;

			courseName = courseName + " " + courseName1;

			cout << "How many credits is the course worth? ";
			cin >> courseCredit;

			Course newCourse(courseName, courseCredit);
			courseVector.push_back(newCourse);
		}
		else if (userInput == 5)
		{
			cout << "Which student is enrolling? ";
			cin >> studentName;
			cin >> studentName1;
			studentName = studentName + " " + studentName1;

			cout << "What course are they enrolling in? ";
			cin >> courseName;
			cin >> courseName1;
			courseName = courseName + " " + courseName1;

			bool flag = false;
			bool flag1 = false;
			for (auto &x : studentVector)
			{
				if (studentName == x.getStudentName())
				{
					flag1 = true;
					for (auto &y : courseVector)
					{
						if (courseName == y.getCourseName())
						{
							x.addCourse(y);
							flag = true;
							break;
						}
					}
					if (!flag)
					{
						cout << "Error: course not found!" << endl;
					}
				}
			}
			if (flag1 == false)
			{
				cout << "Error: Student not found!" << endl;
			}
		}
		else if (userInput == 6)
		{
			cout << "Which teacher is to be assigned? ";
			cin >> studentName;
			cin >> studentName1;
			studentName = studentName + " " + studentName1;

			cout << "What course are they assigning to? ";
			cin >> courseName;
			cin >> courseName1;
			courseName = courseName + " " + courseName1;

			bool flag = false;
			bool flag1 = false;
			for (auto &x : teacherVector)
			{
				if (studentName == x.getTeachersName())
				{
					flag1 = true;
					for (auto &y : courseVector)
					{
						if (courseName == y.getCourseName())
						{
							x.addCourse(y);
							flag = true;
							break;
						}
					}
					if (flag == false)
					{
						cout << "Error: course not found!" << endl;
					}
				}
			}
			if (flag1 == false)
			{
				cout << "Error: teacher not found!" << endl;
			}
		}
		else if (userInput == 7)
		{
			cout << personVector.size() << endl;
			sort(personVector.begin(), personVector.end());

			for (auto &z : personVector) 
			{
				cout << z.getName() << endl;
			}
			//cout << endl;
		}
		else if (userInput == 8)
		{
			//sort function to sort course alphabeticaly
			sort(courseVector.begin(), courseVector.end());
			for (auto &y : courseVector)
			{
				cout << y.getCourseName() << endl;
			}
			cout << endl;
		}
		else if(userInput == 9)
		{
			double costTuition;
			cout << "Enter cost of tuition: ";
			cin >> costTuition;

			for (auto &y : studentVector)
			{
				y.payTuition(costTuition);
			}

			/*for (auto &j : studentVector)
			{
				cout << j.getBalance() << endl;
			}*/
		}
		else if (userInput == 10)
		{
			for (auto &i : employeeVector)
			{
				i.paySalary();
			}

			for (auto &j : teacherVector)
			{
				j.paySalary();
			}

			for (auto &k : employeeVector)
			{
				cout << k.getBalance() << endl;
			}

			for (auto &l : teacherVector)
			{
				cout << l.getBalance() << endl;
			}
		}
		else if (userInput == 11)
		{
			for (auto &l : teacherVector)
			{
				l.endSemester();
			}

			for (auto &p : studentVector)
			{
				p.endSemester();
			}
		}
		else if (userInput == 12)
		{
			cout << "Whose balance would you like to check? ";
			cin >> studentName;
			cin >> studentName1;
			studentName = studentName + " " + studentName1;

			for (auto &x : teacherVector)
			{
				if (studentName == x.getTeachersName())
				{
					cout << x.getTeachersName() << " balance is " << x.getBalance() << endl;
				}
			}
			for (auto &y : studentVector)
			{
				if (studentName == y.getStudentName())
				{
					cout << y.getStudentName() << " balance is " << y.getBalance() << endl;
				}
			}
			for (auto &z : employeeVector)
			{
				if (studentName == z.getEmployeeName())
				{
					cout << z.getEmployeeName() << " balance is "<< z.getBalance() << endl;
				}
			}
		}
	}

	//Dbug
	//cout << p1.totalPopulation() << endl;

	cout << "Goodbye" << endl;

	system("pause");
	return 0;
}