// Traverse of a Linked List and Count the number of Linked List
#include <bits/stdc++.h>
using namespace std;
  
class Node {
public:
    int data;
    Node* next;
};
  
// This function prints contents of linked list
// starting from the given node
void printList(Node* n)
{
    int count = 0;
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
        count = count + 1;
    }
    cout << "Count of Linked Lists: " << count << ".";
}
  
// Main code
int main()
{
    
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
    third->next = NULL;     // pointer of third is NULL so this terminates the Linked_List
  
    printList(first);
    
    return 0;
}
