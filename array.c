#include <stdio.c>

/*
How to initialize arrays in c.
*/

int main(void)
{
	int array[10] = { 5, 5, 5, 5, 5, 5, 5, 5, 5, 5 };
	
	int array[10] = { 1, 2 }; // Initialize to 1, 2, 0, 0...

	int array[10] = { 0 }; // All elements set to 0

	int array[10] = {}; // Not allowed in c, but in c++ will initialize each element 0

	static int array[10]; // All elements 0
}