#include<iostream>
using namespace std;

class Node
{
	public:
	string Name;
	Node* Next;
	
	Node()
	{
		Next = NULL;
	}

};

class Stack
{
	Node* Head;
	
	public:
	Stack()
	{
		Head = NULL;
	}
	
	void insert()
	{
		Node* temp = new Node;
		temp->Name;
		temp->Next = Head;
		Head = temp;
	}
	
	void append(int x)
	{
		Node* temp = new Node;
		temp->Name;
		temp->Next = Head;
		Head = temp;
	}
	
	Node pop()
	{
		Node temp = *Head;
		Head = Head->Next;
		return temp;
	}
	
	Node top()
	{
		return *Head;
	}
};
