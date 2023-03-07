#pragma once


#include <iostream>
#include <string>
#include <vector>
	
using namespace std;
	
class Single_Linked_List
{
	public:
	Single_Linked_List();
	~Single_Linked_List();
	void push_front(const double& item);
	void push_back(const double& item);
	void pop_front();
	void pop_back();
	double front() const;
	double back() const;
	bool empty() const;
	void insert(size_t index, const double& item);
	bool remove(size_t index);
	size_t find(const double& item);
	void print() const;

	private:
		struct Node
		{
		double data;
		Node *next;
	};
		Node *head;
		Node *tail;
		int num_items;
	
};


	
	
	
	

