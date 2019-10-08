// largest value.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include<iostream>
#include<cstdlib>
void largest_value(int *&arr, int size);
using namespace std;
int main()
{
	int size;
	cout << "Enter the size of the array" << endl;
	cin >> size;
	int* arr = new int[size];
	cout << "Enter the values of the array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> *(arr+ i);
	}

	largest_value(arr, size);

	return 0;
}

//function to find largest value
void largest_value(int *&arr, int size)
{

	int max=0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr+i) > max) { max = *(arr+i); cout << max; }
			
	}
	if (true)
	{
		cout << "Largest number is " << max << endl;
	}
	else
		cerr << "error in program";

	delete arr;

}