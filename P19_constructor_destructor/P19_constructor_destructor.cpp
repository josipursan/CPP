// P19_constructor_destructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Circle
{
private:
	double radius;

public:
	Circle()	//default constructor
	{
		radius = 0;
	}

	Circle(double r)	//parametrized constructor
	{
		radius = r;
	}

	Circle(Circle &t)	//copy constructor
	{
		radius = t.radius;
	}

	void setRadius(double r)
	{
		radius = r;
	}

	double getArea()
	{
		return 3.14*radius*radius;
	}

	~Circle() //destructor
	{

	}
			
};

int main()
{
	Circle c1;	//default constructor invoked
	Circle c2(2);	//parametrized constructor invoked
	Circle c3(c2);	//copy constructor invoked

	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
	cout << c3.getArea() << endl;

	return 0;
	
}

/* Sto se u mainu dogada? 
Stvaranjem objekta c1, koristimo defaultni konstruktor obzirom da nismo predali nikakav parametar. Default konstruktor samostalno postavlja
radijus na 0

Stvaranjem objekta c2, mi svojevoljno predajemo vrijednost 2, te se koristi parametrizirani konstruktor koji prima neki parametar/argument.

Stvaranjem objekta c3, koristimo copy konstruktor koji vrsi inicijalizaciju koristeci vrijednosti nekog drugog objekta, koji se tijekom 
stvaranja objekta c3 predaje kao argument.

A destructor is a member function having sane name as that of its class preceded by ~(tilde) sign 
and which is used to destroy the objects that have been created by a constructor. 
It gets invoked when an object’s scope is over.
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
