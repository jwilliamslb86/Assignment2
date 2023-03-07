
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;



class Employee
{
public:
	Employee(string name, int hours, double rate);

};


class Professional : public Employee
{
public:
	Professional(string name, int hours, double rate);
};

Professional::Professional(string name, int hours, double rate) : Employee(name, hours, rate) {}

double Professional::weeklySalary() {}

double Professional::healthCare(){}

double Professional::vacationDays(){}
	
void Professional::print(){}

class Nonprofessional : public Employee
{
public:
	Nonprofessional(string name, int hours, double rate);
};

Nonprofessional::Nonprofessional(string name, int hours, double rate) : Employee(name, hours, rate) {}

double Nonprofessional::weeklySalary() {}
	
double Nonprofessional::healthCare() {}

double Nonprofessional::vacationDays() {}

void Nonprofessional::print() {}






