#include <stdio.h>
#include <stdlib.h>  /* for dynamic allocation */
#include "stack.h"

/*
 * LIFO
 */

void stackInit(stackT *stackP, int maxSize)
{
	stackElementT *newContents;
	// 1
	newContents = (stackElementT *)malloc(sizeof(stackElementT) * maxSize);

	if (newContents == NULL)
	{
		fprintf(stderr, "Insufficient memory to initialize stack.\n");
    	exit(1);
	}

	stackP->contents = newContents;
	stackP->maxSize = maxSize;
	stackP->top = -1; /* Empty */
}

void stackDestroy(stackT *stackP)
{
	free(stackP->contents);

	stackP->contents = NULL;
	stackP->maxSize = 0;
	stackP->top = -1;
}

int stackIsEmpty(stackT *stackP)
{
	return stackP->top < 0;
}

int stackIsFull(stackT *stackP)
{
	return stackP->top >= stackP->maxSize - 1;
}

void stackPush(stackT *stackP, stackElementT element)
{
	if (stackIsFull(stackP))
	{
		fprintf(stderr, "Can't push element on stack: stack is full.\n");
    	exit(1);  /* Exit, returning error code. */
	}

	stackP->contents[++stackP->top] = element;
}

stackElementT stackPop(stackT *stackP)
{
	if (stackIsEmpty(stackP))
	{
		fprintf(stderr, "Can't pop element from stack: stack is empty.\n");
    	exit(1);  /* Exit, returning error code. */
	}

	return stackP->contents[stackP->top--];
}

// When you pass a stack to functions, pass by reference