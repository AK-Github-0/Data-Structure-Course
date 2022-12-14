#include <iostream>
#include <bits/stdc++.h>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;

class Sorting_Arrays
{
public:
void Input_Array()
{
	int Length;
	
	cout<<"Enter the length of array";
	cin>>Length;
	
	int array[Length];
	
	for (int i = 0; i < Length; i++)
	 	{
		 	array[i] = rand() ;
		}
	
	int n = sizeof(array)/sizeof(array[0]);
	
	bubbleSort(array,n);
	
//	Bucket_Sort(array,n);
}

void Display_Array(int array[], int Length)
{
	for (int i = 0; i < Length; i++)
		{
			cout << array[i] << " "<<endl;
		}
}

void swap(int *xp, int *yp)
{
	int temp = *xp;
	
	*xp = *yp;
	
	*yp = temp;
}

int bubbleSort(int array[], int n)
{	
	for (int i = 0; i < n-1; i++)	
		{
		for (int j = 0; j < n-i-1; j++)
			{
				if (array[j] > array[j+1])
					swap(&array[j], &array[j+1]);
			}
		}
		Display_Array(array,n);
}

void Bucket_Sort(int array[], int n)
{  
    vector<int> b[n];
    
	for (int i = 0; i < n; i++) 
	{
        int bi = n * array[i];
        b[bi].push_back(array[i]);
    }
    for (int i = 0; i < n; i++)
        {
		sort(b[i].begin(), b[i].end());
 		}
    
	int index = 0;

	for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
            array[index++] = b[i][j];
      
}

};

void time()
{
	time_t now1 = time(0);
	
	char* ds = ctime(&now1);
	
	cout << "The local date and time is: " << ds << endl;	
}

int main()
{
	
	time();
	
	Sorting_Arrays object;
	cout<<"Sorted array via bubble sort is : \n";
	object.Input_Array();
//	object.Bucket_Sort(array,n);
	
	time();
	return 0;
}
//As the permission was given in intructions the assignment is made with geeks for geeks codes.
