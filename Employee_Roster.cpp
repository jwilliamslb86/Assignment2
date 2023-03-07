#include "Employee_Roster.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
	

int main() {


	Employee *emp[5];
	emp[0] = new Professional("John", 40, 20.00);
	emp[1] = new Professional("Mary", 40, 20.00);
	emp[2] = new Professional("Bob", 40, 20.00);
	emp[3] = new Nonprofessional("Sue", 40, 20.00);
	emp[4] = new Nonprofessional("Joe", 40, 20.00);

	cout << "Name" << setw(20) << "Weekly Salary" << setw(20) << "Health Care" << setw(20) << "Vacation Days" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		emp[i]->print();
	}

	return 0;


};


