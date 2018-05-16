#pragma once
#include"Library.h"
template <typename T>
class List
{
private:
	class Node
	{
	public:
		T data;
		Node *nextPtr;
	
		Node(T data)
		{
			this->data = data;
			this->nextPtr = nullptr;
		}

	} *firstPtr, *lastPtr;
	
	size_t count;

public:
	List() 
	{ 
		firstPtr =lastPtr= nullptr;
		count = 0;
	}

	void push_back(T data);
	void push_front(T data);
	void print();
	~List();
	size_t size() { return count; };


};