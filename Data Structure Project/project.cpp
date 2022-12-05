/********************************
CS 221 PROJECT
CELLULAR NETWORK SYSTEM
ABDULLAH KHAN(2020024)
********************************/
#include "customer.h"
#include "windows.h"

int main()
{		
	
	char n;
	int b,c,x,y,s,input_key;
	int key = 123;
	int quit,menu = 0; 
	
	Towers *T;
	
	cout<<"\t\t\tCELLULAR NETWORK SYSTEM"<<endl<<endl;
	
	while(quit != 1)
	{

		cout<<"Welcome to cellular network system"<<endl;
		
		cout<<"Are you a customer or employee ?"<<endl;
		cout<<"1.Customer"<<endl;
		cout<<"2.Employee"<<endl;
		cout<<"3.Quit the program"<<endl;
		cin>>b;
		
		menu=0;
		
		switch(b)
		{
			case 1:
			{
				while(menu == 0)
				{

					system("cls");

					cout<<"Welcome customer!"<<endl;
					cout<<"What would you like to do ?"<<endl;
					cout<<"1.Make a call."<<endl;
					cout<<"2.Receive a call."<<endl;
					cout<<"3.Back to main menu"<<endl;
					cin>>c;

					switch(c)
					{
						case 1:
						{
							system("cls");
							customer c;
							c.Type("caller");
							c.Number();
							cout<<"Ringing......."<<endl;
							Sleep(50*60);
							c.findnearesttower(T);
							break;	
						}
						case 2:
						{
							cout<<"Receiving call....."<<endl;
							Sleep(50*60);
							system("cls");
							customer C;
							C.Type("receiver");
							C.findnearesttower(T);
							break;
						}
						case 3:
						{
							system("cls");
							menu = 1;
							cout<<"Returning to main menu....."<<endl;
							break;
						}
					}
				}
				break;
			}
			case 2:
			{
				cout<<"To confirm you are an employee, please enter security key :"<<endl;
				cin>>input_key;
				
				if(input_key == key)
				{
					system("cls");
					
					cout<<"Welcome Employee!"<<endl;
					while(menu ==0)
					{
						cout<<"What would you like to do ?"<<endl;
						cout<<"1.Set a tower."<<endl;
						cout<<"2.Set another tower connected to previous tower."<<endl;
						cout<<"3.Display all towers"<<endl;
						cout<<"4.Back to main menu"<<endl;
						cin>>c;
						
						switch(c)
						{
							case 1:
							{
								cout<<"Setting tower......."<<endl;
								
								system("cls");
								int X, Y, S;
								cout<<"Enter the tower name(must be in character)"<<endl;
								cin>>n;
								
								cout<<"Enter the tower location (x axis)"<<endl;
								cin>>X;
								
								cout<<"Enter the tower location (y axis)"<<endl;
								cin>>Y;
								
								cout<<"Enter the tower strength"<<endl;
								cin>>S;
								if(T == NULL){
									T = new Towers;
								
									T->Set_Tower(n,X,Y,S);
								}
								else{
									Towers *G = new Towers;
									G->Set_Tower(n,X,Y,S);
									T->Set_Child(G);
								}
								break;	
							}
							case 2:
							{
								system("cls");
								Towers *temp= new Towers();
								int X, Y, S;
								cout<<"Enter the tower name(must be in character)"<<endl;
								cin>>n;
								
								cout<<"Enter the tower location (x axis)"<<endl;
								cin>>X;
								
								cout<<"Enter the tower location (y axis)"<<endl;
								cin>>Y;
								
								cout<<"Enter the tower strength"<<endl;
								cin>>S;
								
								temp->Set_Tower(n,X,Y,S);
								T->Set_Child(temp);
								break;
							}
							case 3:
							{
								system("cls");
								T->Display();					
								break;
							}
							case 4:
							{
								cout<<"returning to main menu....."<<endl;
								system("cls");
								menu = 1;		
								break;
							}
						}
					}
				}
				else
				{
					cout<<"Incorrect key"<<endl;
					cout<<"Enter the correct key"<<endl;
					Sleep(500);
					break;
				}
				
				break;
			}
			case 3:
			{
				
				cout<<"Exiting cellular network system......";
				system("cls");
				quit = 1;
				break;
			
			}
		}
	}
}
