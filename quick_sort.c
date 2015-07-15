#include <stdio.h>

/* 
Steps: Conquer-then-divide
1. Choose any element of the array to be the pivot.
2. Divide all other elements except the pivot into two partitions.
3. Use recursion to sort both partitions
4. Join the first sorted partition, the pivot and the second sorted partition. 
Runtime: O(nlogn) to O(n^2), n is number of elements in array.
Test cases from rosettacode.org
*/
void quickSort (int *array, int n);

int main()
{
	int a[] = {4, 65, 2, -31, 0, 99, 2, 83, 782, 1};
    int n = sizeof a / sizeof a[0];
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d%s", a[i], i == n - 1 ? "\n" : " ");
    }

    quickSort(a, n);

    for (i = 0; i < n; i++)
    {
        printf("%d%s", a[i], i == n - 1 ? "\n" : " ");
    }

	return 0;
}

void quickSort (int *array, int n)
{
	int pivot, left, right, temp;

	//Base case
	if (n < 2)
	{
		return;
	}

	//1. Pick pivot
	pivot = array[n/2];

	for (left = 0, right = n - 1;; left++, right--)
	{
		while (array[left] < pivot)
		{
			left++;
		}
		while (array[right] > pivot)
		{
			right--;
		}

		if (left >= right)
		{
			break;
		}
		temp = array[left];
		array[left] = array[right];
		array[right] = temp;
	}

	quickSort(array, left);
	quickSort(array + left, n - left);
}
