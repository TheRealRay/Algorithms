#include <iostream>
using namespace std;

struct Node{
  int id;
  Node *nextNode;
};

int main(){
  Node* root = new Node();
  root -> nextNode = 0;
  root -> id = 5;
  cout << root -> id << endl;
  return 0;
}
