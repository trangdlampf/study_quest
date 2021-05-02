// push() and pop() on stack, which is Lifo
#include <iostream>
#include <stack>
using namespace std;
  
int main()
{
    // Empty stack
    stack<int> mystack;
    // push 0 1 2
    mystack.push(0);
    mystack.push(1);
    mystack.push(2);
  
    // Printing content of stack
    while (!mystack.empty()) {
        // prints 2 1 0
        cout << ' ' << mystack.top();
        // pop 2 1 0
        mystack.pop();
    }
}
