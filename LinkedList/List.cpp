#include"List.h"

template<typename T>
void List<T>::push_back(T data)
{
	if (count == 0)
	{
		firstPtr = new Node(data);
		lastPtr = firstPtr;
	}
	else
	{
		lastPtr->nextPtr = new Node(data);
		lastPtr = lastPtr->nextPtr;
	}
	count++;
}
template<typename T>
void List<T>::push_front(T data)
{

	if (count == 0)
	{
		firstPtr = new Node(data);
		lastPtr = firstPtr;
	}
	else
	{
		Node *e = new Node(data);
		e->nextPtr = firstPtr;
		firstPtr = e;
	}
	count++;
}
template<typename T>
void List<T>::print()
{
	Node *curPtr = firstPtr;
	cout << curPtr->data << endl;

	while (curPtr != lastPtr)
	{
		curPtr = curPtr->nextPtr;
		cout << curPtr->data << endl;
	} 
}

template<typename T>
List<T>::~List()
{
	Node *curPtr;
	Node n = *firstPtr;
	curPtr = firstPtr;
	delete firstPtr;

	while ((n != *lastPtr))
	{
		curPtr = n.nextPtr;
		n = *curPtr;
		delete curPtr;
	}
}