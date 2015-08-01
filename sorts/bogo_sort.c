#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Shuffle a collection randomly until it's sorted... L to the O to the L.
 */

bool isSorted (int *array, int size)
{
	while ( --size >= 1)
	{
		if (array[size] < array[size - 1])
		{
			return false;
		}
	}

	return true;
}

void shuffle (int *array, int size)
{
	int i, temp, random;

	for (i = 0; i < size; i ++) 
	{
		temp = array[i];
		random = rand() % size;
		array[i] = array[random];
		array[random] = temp;
	}
}

void bogoSort (int *array, int size)
{
	while (!isSorted(array, size))
	{
		shuffle(array, size);
	}
}

int main()
{
    int numbers[] = { 1, 10, 9,  7, 3, 0 };
    int i;
	int n = sizeof numbers / sizeof numbers[0];

    for (i=0; i < 6; i++) printf("%d%s", numbers[i], i == n - 1 ? "\n" : " ");
 
    bogoSort(numbers, 6);

    for (i=0; i < 6; i++) printf("%d ", numbers[i]);

    printf("\n");
}