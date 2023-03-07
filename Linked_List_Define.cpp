/**

Build a Single_Linked_List class. Your class should have the data members: head, tail,
and num_items. Write the following member functions, which perform the same operations as the
corresponding functions in the standard list class:
• push_front,
• push_back,
• pop_front,
• pop_back,
• front, back,
• empty,
• void insert(size_t index, const Item_Type& item): Insert item at position index (starting at 0).
Insert at the end if index is beyond the end of the list
• bool remove(size_t index): Remove the item at position index. Return true if successful;
return false if index is beyond the end of the list.
• size_t find(const Item_Type& item): Return the position of the first occurrence of item if it is
found. Return the size of the list if it is not found.


*/

#include "Linked_List.h"
#include <iostream>
#include <string>
#include <vector>




using namespace std;

Single_Linked_List::Single_Linked_List()
{
	head = NULL;
	tail = NULL;
	num_items = 0;
}

Single_Linked_List::~Single_Linked_List()
{
	while (head != NULL)
	{
		Node *temp = head;
		head = head->next;
		delete temp;
	}
}

void Single_Linked_List::push_front(const double& item)
{
	Node *temp = new Node;
	temp->data = item;
	temp->next = head;
	head = temp;
	if (num_items == 0)
		tail = temp;
	num_items++;
}

void Single_Linked_List::push_back(const double& item)
{
	Node *temp = new Node;
	temp->data = item;
	temp->next = NULL;
	if (num_items == 0)
		head = temp;
	else
		tail->next = temp;
	tail = temp;
	num_items++;
}

void Single_Linked_List::pop_front()
{
	if (num_items == 0)
		return;
	Node *temp = head;
	head = head->next;
	delete temp;
	num_items--;
	if (num_items == 0)
		tail = NULL;
}

void Single_Linked_List::pop_back()
{
	if (num_items == 0)
		return;
	Node *temp = head;
	while (temp->next != tail)
		temp = temp->next;
	delete tail;
	tail = temp;
	tail->next = NULL;
	num_items--;
	if (num_items == 0)
		head = NULL;
}

double Single_Linked_List::front() const
{
	if (num_items == 0)
		return double();
	return head->data;
}

double Single_Linked_List::back() const
{
	if (num_items == 0)
		return head->data;
	return tail->data;
}

bool Single_Linked_List::empty() const
{
	return num_items == 0;
}	

void Single_Linked_List::insert(size_t index, const double& item)
{
	if (index >= num_items)
	{
		push_back(item);
		return;
	}
	Node *temp = new Node;
	temp->data = item;
	if (index == 0)
	{
		temp->next = head;
		head = temp;
	}
	else
	{
		Node *p = head;
		for (size_t i = 1; i < index; i++)
			p = p->next;
		temp->next = p->next;
		p->next = temp;
	}
	num_items++;
}

bool Single_Linked_List::remove(size_t index)
{
	if (index >= num_items)
		return false;
	if (index == 0)
		pop_front();
	else
	{
		Node *p = head;
		for (size_t i = 1; i < index; i++)
			p = p->next;
		Node *temp = p->next;
		p->next = temp->next;
		delete temp;
	}
	num_items--;
	return true;
}

size_t Single_Linked_List::find(const double& item)
{
	Node *p = head;
	size_t i = 0;
	while (p != NULL)
	{
		if (p->data == item)
			return i;
		p = p->next;
		i++;
	}
	return num_items;
}

void Single_Linked_List::print() const
{
	Node *p = head;
	while (p != NULL)
	{
		cout << p->data << endl;
		p = p->next;
	}
}

