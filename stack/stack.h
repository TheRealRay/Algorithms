#ifndef _STACK_H
#define _STACK_H

typedef char stackElement;

typedef struct {
	stackElement *contents;
	int top;
	int maxSize;
} stackT

void stackInit(stackT *stackP, int maxSize);
// Needs to change stack passed to it.  Therefore, stack is passed by reference.
// Allocate space for contents.
// Store maxiumum size.
// Set up top.
// Make sure space was allocated by testing pointer against NULL

void stackDestroy(stackT *stackP);
// Get rid of any dynamically-allocated memory and set stack to reasonable state.

int stackIsEmpty(stackT *stackP);
int stackIsFull(stackT *stackP);
// Don't have to pass by reference, but should to be consistent.

void stackPush(stackT *stackP, stackElementT element);
// Should place element at the top of the stack.
// Should check if the array is not already full.

stackElementT stackPop(stackT *stackP);

#endif