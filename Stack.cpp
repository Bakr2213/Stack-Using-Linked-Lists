#include "Stack.h"
#include <cstddef>
#include "Node.h"
#include <iostream>
using namespace std;
Stack::Stack()
{
	top = NULL;
}

bool Stack::isempty()
{
	if (top == NULL)
		return true;
	else
		return false;
}

void Stack::push(int item)
{
	Node* newnode = new Node();
	newnode->data = item;
	if (isempty())
	{
		newnode->next = NULL;
		top = newnode;
	}
	else
	{
		newnode->next = top;
		top = newnode;
	}
}

int Stack::pop()
{
	int value;
	Node* delptr = top;
	value = top->data;
	top = top->next;
	delete delptr;
	return value;
}

int Stack::peek()
{
	return top->data;
}

int Stack::count()
{
	int counter = 0;
	Node* temp = top;
	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return counter;
}

bool Stack::isfound(int item)
{
	bool found = false;
	Node* temp = top;
	while (temp != NULL)
	{
		if (temp->data == item)
			found = true;
		temp = temp->next;
	}
	return found;
}

void Stack::display()
{
	Node* temp=top;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
}
