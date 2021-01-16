/*
*	SingleLinkedList.h :
	this contains class SingleLinkedList with
	- head pointer to address of starting node.
	- count contains number of node present in linkedList
	SinglelinkedList is Linear data structure used to store the data with the next pointer 
	it contains several methods to perform operation on list
*/
#pragma once
#include "Node.h"
class LinkedList
{
public:
	LinkedList()
	{
		head = nullptr;
		count = 0;
	}

	~LinkedList()
	{
	}

private:
	Node* head;
	int count;
};
