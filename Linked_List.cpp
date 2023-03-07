#include "Linked_List.h"
#include <iostream>
#include <string>

using namespace std;



int main() {

	Single_Linked_List list;

	list.push_front(2.2);
	list.push_front(1.1);
	list.push_front(3.3);
	list.push_front(4.4);
	list.push_front(5.5);
	list.push_front(6.6);
	list.push_front(7.7);

	list.print();

	cout << endl;

	list.remove(4);

	list.print();

	cout << endl;

	list.insert(2, 9.9);

	list.print();

	cout << endl;

	cout << list.find(9.9) << endl;

	cout << list.find(2.2) << endl;
									
	cout << list.find(7.7) << endl;

	cout << list.find(1.1) << endl;
	
	list.print();

	cout << endl;

	list.pop_front();
	
	cout << endl;

	list.print();

	cout << endl;

	list.pop_back();

	cout << endl;

	list.print();

	cout << endl;

	cout << list.front() << endl;

	cout << endl;

	cout << list.back() << endl;

	cout << endl;

	list.push_back(8.8);

	list.print();

	cout << list.empty() << endl;

	cout << endl;

	list.pop_back();

	list.print();

	cout << list.empty() << endl;

	cout << endl;

	return 0;





};