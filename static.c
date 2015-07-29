#include <stdio.h>

/*
Explanation of keyword, "static" in c.
1. Static variable inside a function keeps its value between invocations.
2. A static global variable or function is "seen" only in the file it's declared in.
*/

void foo()
{
	int a = 10;
	static int sa = 10;

	a += 5;
	sa += 5;

	printf("a = %d, sa = %d\n", a, sa);
}

int main(void)
{
	// Example of 1.
	int i;

	for (i = 0; i < 10; ++i)
	{
		foo();
	}

	// Output
	/*
	a = 15, sa = 15
	a = 15, sa = 20
	a = 15, sa = 25
	a = 15, sa = 30
	a = 15, sa = 35
	a = 15, sa = 40
	a = 15, sa = 45
	a = 15, sa = 50
	a = 15, sa = 55
	a = 15, sa = 60
	*/
}
