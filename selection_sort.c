#include <stdio.h>

/* Find smallest element in the array, replace with first item, then next smallest at second spot...
keep going until completely sorted. */

void selectionSort (int *a, int n) 
{
	int i, j, m, t;
	for (i = 0; i < n; i++){
		for (j = i, m = i; j < n; j++){
			if(a[j] < a[m]){
				m = j;
			}
		}
		t = a[i];
		a[i] = a[m];
		a[m] = t;
	}
}

int main () 
{
    int a[] = {4, 65, 2, -31, 0, 99, 2, 83, 782, 1};
    int n = sizeof a / sizeof a[0];
    int i;

    for (i = 0; i < n; i++){
        printf("%d%s", a[i], i == n - 1 ? "\n" : " ");
    }

    selectionSort(a, n);

    for (i = 0; i < n; i++){
        printf("%d%s", a[i], i == n - 1 ? "\n" : " ");
    }

    return 0;
}