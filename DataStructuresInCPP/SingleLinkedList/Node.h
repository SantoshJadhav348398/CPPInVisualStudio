#pragma once
/*
* Node.h file : class Node contains
*				- value (data) to store data
*				- next (pointer) to store pointer to next node [initially pointing to null]
*	
*/
class Node
{
public:
	Node* next;
	int value;
	Node(int val)
	{
		next = nullptr;
		value = val;
	}

	~Node()
	{
	}

private:

};
