// Traverse Linked List
#include <bits/stdc++.h>
using namespace std;
  
class Node {
public:
    int data;
    Node* next;
};
  
// Prints contents of linked list
void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
  
// Main code
int main()
{
    // creates empty Nodes
    Node* first = NULL;   
    Node* second = NULL;
    Node* third = NULL;
  
    // allocate 3 nodes in the heap
    first = new Node();
    second = new Node();
    third = new Node();
  
    first->data = 18;       // assign data in first node
    first->next = second;   // Link first node with second
  
    second->data = 21;      // assign data to second node
    second->next = third;
  
    third->data = 33;       // assign data to third node
    third->next = NULL;
  
    printList(first);
  
    return 0;
}
