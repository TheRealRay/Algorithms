#include <stdio.h>
#include <stdlib.h>

/*
 * Turn array into binary heap structure. Has property which allows efficient retrieval
 * and removal of maximal element. Repeatedly remove the max element, building the sorted list
 * from back to front. Requires random access, can only be used on array like data structure.
 */

#define ValType double
#define IS_LESS(v1, v2) (v1 < v2)
#define SWAP(r,s)  do{ValType t=r; r=s; s=t; } while(0)

void siftDown ( ValType *array, int start, int end)
{
	int root = start;

	while (root * 2 + 1 < end)
	{
		int child = 2 * root + 1;

		if ((child + 2) && IS_LESS(array[child], array[child + 1]))
		{

		}
		if ()
		{

		}
		else
		{
			return;
		}
	}
}

void heapSort ()
{

}

int main()
{
    int ix;
    double valsToSort[] = {
        1.4, 50.2, 5.11, -1.55, 301.521, 0.3301, 40.17,
        -18.0, 88.1, 30.44, -37.2, 3012.0, 49.2};

#define VSIZE (sizeof(valsToSort)/sizeof(valsToSort[0]))
 
    heapsort(valsToSort, VSIZE);
    printf("{");
    for (ix=0; ix<VSIZE; ix++) printf(" %.3f ", valsToSort[ix]);
    printf("}\n");
    return 0;
}