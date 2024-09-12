#pragma once
#include "Node.h"
class Stack
{
	Node* top;
public:
	Stack();
	bool isempty();
	void push(int item);
	int pop();
	int peek();
	int count();
	bool isfound(int item);
	void display();

};

