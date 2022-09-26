#ifndef MYLIST_H
#define MYLIST_H

#include "Node.h"

template<class T>
class myList
{
private:
	node<T>* head;
	int size;

public:
	myList()
	{
		head = nullptr;
		size = 0;
	}

	~myList();

	void insert(T item);
	void remove();
	T front();
	void print();
	bool find(T item);
	bool isEmpty()
	{
		return size == 0;
	}
	int getSize()
	{
		return size;
	}
};
#endif
