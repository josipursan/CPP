// P11_2d_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void print(int A[][3], int N, int M)
{
	for (int R = 0; R < N; R++)
	{
		for (int C = 0; C<M; C++)
		{
			cout << A[R][C] << " ";
		}
		cout << "\n";
	}
}


int main()
{
	int arr[4][3] =		{{12,29,11},
						{25,25,13},
						{24,64,67},
						{11,18,14}};

	print(arr,4,3);
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
