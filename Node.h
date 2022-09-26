#pragma once
#ifndef NODE_H
#define NODE_H

template<class T>
class node
{
public:
	T data;
	node<T>* next;
	node()
	{
		next = nullptr;
	}
	node(T item)
	{
		data = item;
		next = nullptr;
	}
};

#endif
