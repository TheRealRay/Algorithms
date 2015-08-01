#include <stdio.h>

/*
 * Pass sequentially over a list, compare each value to the one immediately after it.
 * If greater, the items switch. Boolean value keeps track of any changes, if there were none, 
 * the algorithm exits.
 */

void bubbleSort (int *array, int size)
{
	int changePresent = 1;
	int i, temp;
	
	while (changePresent)	
	{
		changePresent = 0;
		for (i = 1; i < size; i ++) {
			if (array[i] < array[i - 1])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				changePresent = 1;
			}
		}
	}
}

int main(void)
{
	int a[] = {4, 65, 2, -31, 0, 99, 2, 83, 782, 1};
    int n = sizeof a / sizeof a[0];
    int i;

    for (i = 0; i < n; i++)
        printf("%d%s", a[i], i == n - 1 ? "\n" : " ");

    bubbleSort(a, n);

    for (i = 0; i < n; i++)
        printf("%d%s", a[i], i == n - 1 ? "\n" : " ");

    return 0;
}
