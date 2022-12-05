#include "tower.h"

class customer
{
	private:
		int locationx,locationy,number;
		string type;
	public:
		string Type(string t)
		{
			type = t;
			return type;
		}
		int Location()
		{
			
		}
		int Number()
		{
			int num;
			cout<<"Enter number you want to call"<<endl;
			cin>>num;
			number = num;
			return number;
		}
		void findnearesttower(Towers *Temp)
		{
			int x = Temp->get_x() - this->locationx;
			int y = Temp->get_y() - this->locationy;
			x= Temp->sqr(x);
			y= Temp->sqr(y);
			int S = x+y;
			if(S <= Temp->sqr(int(Temp->get_s())))
			{
				cout << Temp->get_n() << " is the neriest Tower\n";
			}
			else
			{
				cout << "Nothing Found..\n";
			}
		}
};
