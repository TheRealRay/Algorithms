#include <stdio.h>

typedef struct Node 
{
	char data;
    struct Node* next;
} Node;

void printList(Node* root) {
  while (root) {
    printf("%c ", root -> data);
    root = root->next;
  }
  printf("\n");
}

Node* reverse(Node* root)
{
	Node* newRoot = 0;
	while (root)
	{
		Node* next = root -> next;
		root->next = newRoot;
		newRoot = root;
		root = next;
	}
	return newRoot;
}

int main(void)
{
	Node d = { 'd', 0 };
    Node c = { 'c', &d };
    Node b = { 'b', &c };
    Node a = { 'a', &b };

    Node* root = &a;
    printList(root);
    root = reverse(root);
    printList(root);

	return 0;
}