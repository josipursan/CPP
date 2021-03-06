// P14_pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number = 10;
	int *pointer_one;
	pointer_one = &number;

	int *pointer_two = &number;

	cout << "Number : " << number << endl;
	cout << "Value stored in pointer one : " << pointer_one <<endl;
	cout << "Pointer one value with & : " << &pointer_one << endl;
	cout << "Pointer one value with * : " << *pointer_one << endl;

	cout << "Pointer two value stored : " << pointer_two << endl;
	cout << "Pointer two with & : " << &pointer_two << endl;
	cout << "Pointer two with * : " << *pointer_two << endl;
}

/* A pointer is a variable that holds a memory address, usually the location of another variable in memory. */


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
