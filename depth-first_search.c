#include <stdio.h>

/* 
 *Travel as deep as possible from neighbour to neighbour before backtracking. 
 * Follow edges and can't visit any vertex twice. Need to keep track of which verticies
 * have already been visited and how we got to where we are. 
 * Visit a node, push all the nodes to be visited onto a stack.
 * To visit a node, pop a node on the stack and then push all connected nodes onto 
 * the stack as well. Mark the nodes we visit. 
 */

typedef struct Node 
{
	char data;
    struct Node* next;
} Node;


void functionToMarkEdges() 
{

}

void dfs(Node vertex)
{

}


int main()
{
	return 0;
}