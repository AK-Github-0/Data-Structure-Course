#include<iostream>

using namespace std;

class Array
{
private:
	
	char ***ptr=new char **[3];
	
public:	

void fill()
{
		
			
	for(int i=0;i<4;i++)
	{
		ptr[i]=new char *[3];
	
	
	for(int j=0;j<2;j++)
	{
		ptr[i][j]=new char [3];
	}
}
    
    	cout<<"Please enter the 16 characters of the 3D array"<<endl;
			
			for(int i=0;i<4;i++)
			{
				for(int j=0;j<2;j++)
				{
					for(int k=0;k<2;k++)
					{
						cin>>ptr[i][j][k];
					}
				}
			}
	}
	
void display()
{
	for(int i=0;i<4;i++)
		{
			for(int j=0;j<2;j++)
				{
				for(int k=0;k<2;k++)
					{
						cout<<"["<<i<<"]["<<j<<"]["<<k<<"] ="<<ptr[i][j][k]<<endl;
					}
				}
			
		}
}

};

int main()
{
	Array object;
		
	object.fill();
	
	object.display();
	
}

