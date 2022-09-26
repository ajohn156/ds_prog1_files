#include "Node.h"
#include "MyList.h"

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

template<class T>
void myList<T>::insert(T item)
{
	node<T>* temp = new node<T>(item);
	ifstream myfile;
	myfile.open("test.txt");
	
	if (myfile.is_open())
	{
		while (myfile.good())
		{
			myfile >> myList;
		}
	}
	cout << myList;
	size++;
}

template<class T>
T myList<T>::front()
{
	if (head != nullptr)
	{
		return head->data;
	}
	else
	{
		return T(0);    
	}
}

template<class T>
void myList<T>::remove()
{
	
		node* current = head, * previous = head;

		while (current != NULL && isSpecialChar(current->data))
		{
			node* temp = current;
			head = current->next;
			current = current->next;
			delete temp;
		}
		previous = head;

		while (current != NULL)
		{
			while (current != NULL && isSpecialChar(current->data))
			{
				node* temp = current;
				previous->next = current->next;
				current = current->next;
				delete temp;
			}
			if (current = NULL)
			{
				break;
				previous = current;
				current = current->next;
			}
		}
		return head;
	}


template<class T>
void myList<T>::print()
{
	for (node<T>* temp = head; temp != nullptr; temp = temp->next)
	{
		cout << temp->data;
		if (temp->next != nullptr)
		{
			cout << " -> " << endl;
		}
		else
		{
			cout << " /\n";
		}
	}

	node* n;
	while (n != NULL)
	{
		cout << n->data << " ";
		n = n->next;
	}
}

template<class T>
bool myList<T>::find(T item)
{
	
}



int main()
{


}
