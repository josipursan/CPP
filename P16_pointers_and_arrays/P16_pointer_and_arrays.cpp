// P16_pointer_and_arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int arr[] = {4,7,11};
	int *pointer = arr;

	cout << *(pointer+0) << "\t";	//rucni ispis svih elemenata polja preko pointer varijable
	cout << *(pointer+1) << "\t";
	cout << *(pointer + 2) << "\t" << endl;

	for (int i = 0; i<3; i++)
	{
		cout << pointer[i] << "\t";	//uglate zagrade obavljaju dereferenciranje, te se stoga ispisuju elementi iz polja arr
	}
	cout << endl;

	for (int j = 0; j<3; j++)
	{
		cout << *(pointer + j) << "\t";	
	}
	cout << endl;
	/* U for petlji iznad dereferenciranje se obavlja "rucno" operatorom dereferenciranja, tj. zvjezdicom. Prvo se adresa koja je spremljena
	u pointer varijabli uveca za j*sizeof(int), te se ta nova adresa onda dereferencira da bismo dobili varijablu spremljenu na toj
	adresi */

	for (int z = 0; z<3; z++)
	{
		cout << (pointer + z) << "\t";
	}
	cout << endl;
	/* U for petlji iznad se ispisuju adrese spremljene u pointer varijabli. Adresa u pointer varijabli se povecava tako da se inicijalnoj
	adresi u pointer dodaje z*sizeof(int). Obzirom da nema operatora dereferenciranja, ispisuje se doslovno ono sto je spremljeno u varijabli
	pointer, tj. adrese.*/

	for (int y = 0; y<3; y++)
	{
		cout << &pointer[y] << "\t";
	}
	cout << endl;
	/* U for petlji iznad takoder se ispisuju adrese elemenata polja. Iako uglate zagrade obavljaju dereferenciranje, forsiranjem ampersand
	operatora, dobijamo zapravo adrese na kojima su spremljene elementi polja arr.*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
