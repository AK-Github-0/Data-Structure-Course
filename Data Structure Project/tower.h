#include<iostream>
#include"stack.h"
using namespace std;


class Towers
{
	
	char Name , X_pos , Y_pos;
	float Strength;
	Node* Childs;
	
public:

	Towers()
	{
		Childs = NULL;
	}
	
	int sqr(int x)
	{
		return x*x;
	}
	
	void Set_Tower(char name, int x, int y, int S)
	{
		this->Strength = S;
		this->X_pos = x;
		this->Y_pos = y;
		this->Name = name;
	}
	
	void Set_Child(Towers* Test)
	{
		int Distance = sqr(Test->X_pos-this->X_pos) + sqr(Test->Y_pos-this->Y_pos); 
		if(Distance <= sqr(Strength))
		{
			if(this->Childs == NULL)
			{
				Childs = new Node;
				Childs->Name = Test->Name;
			}
			else
			{
				Node* Temp = Childs;
				
				while(Temp->Next != NULL)
				{
					Temp = Temp->Next;
				}
				
				Temp->Next = new Node;
				Temp->Next->Name = Test->Name;
			}
			if(Test->Childs == NULL)
			{
				Test->Childs = new Node;
				Test->Childs->Name = this->Name;
			}
			else
			{
				Node* Temp = Test->Childs;
				while(Temp->Next != NULL)
				{
					Temp = Temp->Next;
				}
				Temp->Next = new Node;
				Temp->Next->Name = this->Name;
			}
		}
	}
	
	int get_x()
	{
		return X_pos;
	}
	int get_y()
	{
		return Y_pos;
	}
	float get_s()
	{
		return Strength;
	}
	char get_n()
	{
		return Name;
	}
	void Display()
	{
		cout << "Name: " << Name << "\n(x, y) : (" << X_pos << ", " << Y_pos << ")\n" << "Connections: ";
		Node *Temp = Childs;
		
		while(Temp != NULL)
		{
			cout << Temp->Name << " ";
			Temp = Temp->Next;
		}
	}
};
