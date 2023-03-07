/*
a. Use an abstract class Employee to store information common to all employees
and to declare member functions for calculating weekly salary (number of hours
worked * hourly rate) and computing health care contributions and vacation days
earned that week (come up with some rules for these 2) . You need 3 functions
(calculating weekly salary, health care contributions, and Vacation days).

b. Define derived classes Professional and Nonprofessional. Create instance for
them.

c. Test your classes

*/


#ifndef _EMPLOYEE_ROSTER
#define _EMPLOYEE_ROSTER


#include <iostream>
#include <string>
#include <iomanip>
#include "Employee_Roster.h"
using namespace std;

class Employee
{
public:
	Employee(string name, int hours, double rate);
	virtual double weeklySalary() = 0;
	virtual double healthCare() = 0;
	virtual double vacationDays() = 0;
	

protected:
	string name;
	int hours;
	double rate;

};

Employee::Employee(string name, int hours, double rate)
{
	this->name = name;
	this->hours = hours;
	this->rate = rate;
}

class Professional : public Employee
{
public:
	Professional(string name, int hours, double rate);
	double weeklySalary();
	double healthCare();
	double vacationDays();
	void print();
};

Professional::Professional(string name, int hours, double rate) : Employee(name, hours, rate)
{}

double Professional::weeklySalary()
{
	return hours * rate;
}

double Professional::healthCare()
{
	return weeklySalary() * 0.1;
}

double Professional::vacationDays()
{
	return hours * 0.1;
}

void Professional::print()
{
	cout << "Name: " << name << endl;
	cout << "Weekly Salary: " << weeklySalary() << endl;
	cout << "Health Care: " << healthCare() << endl;
	cout << "Vacation Days: " << vacationDays() << endl;
}

class Nonprofessional : public Employee
{
public:
	Nonprofessional(string name, int hours, double rate);
	double weeklySalary();
	double healthCare();
	double vacationDays();
	void print();
};

Nonprofessional::Nonprofessional(string name, int hours, double rate) : Employee(name, hours, rate)
{}

double Nonprofessional::weeklySalary()
{
	return hours * rate;
}

double Nonprofessional::healthCare()
{
	return weeklySalary() * 0.05;
}

double Nonprofessional::vacationDays()
{
	return hours * 0.05;
}

void Nonprofessional::print()
{
	cout << "Name: " << name << endl;
	cout << "Weekly Salary: " << weeklySalary() << endl;
	cout << "Health Care: " << healthCare() << endl;
	cout << "Vacation Days: " << vacationDays() << endl;
}



#endif
