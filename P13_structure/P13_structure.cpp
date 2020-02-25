// P13_structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

struct Student 
{
	int rollno, age;
	char name[80];
	float marks;
};

int main()
{
	Student s1, s3;

	cin >> s1.rollno >> s1.age >> s1.name >> s1.marks;
	cout << "\n";
	cout << s1.marks << s1.age << s1.name << s1.marks;
	cout << "\n";

	Student s2 = {100, 17, "Aniket", 92};
	cout << s2.rollno << s2.age << s2.name << s2.marks;
	cout << "\n";

	s3 = s2;
	cout << s3.rollno << s3.age << s3.name << s3.marks;
	cout << "\n";

	return 0;
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
