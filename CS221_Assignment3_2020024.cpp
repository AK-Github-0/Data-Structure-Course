#include <iostream>  
using namespace std;  

class Matrix
{
	public:	
	int rows,columns;
	
	filling_matrix()
	{	
		
		cout<<"Enter the number of matrix rows "<<endl;
		cin>>rows;
	
		cout<<"Enter the number of matrix rows "<<endl;
		cin>>columns;
		
		float matrix[rows][columns];
		
		cout<<"Enter any decimal numbers for the 2D matrix"<<endl;
		
		for(int i=0;i<rows;i++)    
	   		{ 
			for(int j=0;j<columns;j++)    
				{    
					
					cin>>matrix[i][j];  
				
				}    
			}  	
		
		cout<<"The matrix is"<<endl;	
		
		for(int i=0;i<rows;i++)    
	   	{ 
			for(int j=0;j<columns;j++)    
				{    
					
					cout<<matrix[i][j]<<" ";    
				
				}    
				cout<<endl;      
			}    
			  
	}
};


int main()  
{
	Matrix a,first_matrix,second_matrix;
	
	first_matrix.filling_matrix();
	
	cout<<"\nNow, we come to second matrix \n\n";
	
	second_matrix.filling_matrix();
	
	cout<<"Checking if multiplication is possible between the two matrices"<<endl<<endl;
		
	if((first_matrix.rows==second_matrix.columns) && (second_matrix.columns==first_matrix.rows))
	{
		
		cout<<"Multiplication of the matrices is possible"<<endl;
	
	}
	else
	{
		
		cout<<"Multiplication of the matrices is not possible"<<endl;
	
	}
	
}

