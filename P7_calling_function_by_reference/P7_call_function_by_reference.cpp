// P7_call_function_by_reference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void swap(int &, int &);

int main()
{
	int a = 10;
	int b = 20;
	cout << "a = " << a << " b = " << b << "\n";
	swap(a,b);

	cout << "a = " << a << " b = " << b << "\n";
	return 0;
}

void swap(int &c, int &d)
{
	int t;
	t = c;
	c = d;
	d = t;
}

/* In call by reference method, the called function accesses and works with the original values using their references. 
Any changes, that occur, take place on the original values are reflected back to the calling code. 

Za poziv funkcije pomocu reference koristi se ampersand operator. Kada se koristi referenca, funkcija radi s originalnim vrijednostima npr.
iz maina, i koristi se njihovom referencom. 
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
