// P8_calling_function_by_value.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void swap(int, int);

int main()
{
	int a = 10;
	int b = 20;
	cout << "a = " << a << " b = " << b << "\n";

	swap(a, b);
	cout << "a = " << a << " b = " << b;

	return 0;
}

void swap(int c, int d)
{
	int t;
	t = c;
	c = d;
	d = t;
}

/*
In call by value method, the called function creates its own copies of original values sent to it. 
Any changes, that are made, occur on the function’s copy of values and are not reflected back to the calling function.

Kada se radi poziv funkcije po vrijednostima, funkcija koja se poziva stvara vlasite kopije predanih argumenata, tj. varijabli, i tada
funkcija radi s tim svojim kopijama. U slucaju poziva funkcije po vrijednostima, nikakve promjene se ne javljaju na originalnim vrijednostima,
vec se sve promjene ocituju na kopijama koje je funkcija stvorila.

Kada ispisemo vrijednosti a i b varijabli prije i poslije poziva funkcije swap, njihove vrijednosti su iste, dok kod P7 primjera, gdje je 
demonstriran poziv funkcije preko reference, vidimo da se javlja razlika u vrijednosti varijabli a i b prije i poslije poziva funkcija swap.
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
