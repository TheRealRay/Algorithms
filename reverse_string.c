#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* String.h includes one variable type, one macro, and several functions for 
manipulating arrays of characters.*/

/*void reverseFunction(char *string)
{
	strrev(string);
}*/

char *reverseWithoutFunction(char *string)
{
	char *reverse;
	int n, c, d;

	n = strlen(string);
	reverse = (char*)malloc(n * 1);

	for (c = n - 1, d = 0; c >= 0; c--, d++){
		reverse[d] = string[c];
	}

	reverse[d] =  '\0';
	return (char *)reverse;
}

int main()
{
	char arr[100];
	char *rev;

	printf("Enter a string to reverse\n");
	gets(arr); //reads string in from stdin and stores into string pointed to by arr.

	rev = reverseWithoutFunction(arr);

	printf("Reverse of entered string is \n%s\n", rev);

	return 0;
}