#include <iostream>
using namespace std;

int main() {
 
  string greeting = "Hello";
  int len = greeting.length(); 	// get length of string
  int n = len - 1;					    // subtract 1 to get index
  
  // loop through the string
  for(int i=0; i<(len/2); i++){ // i loops from h to o in hello
	  
    // Use swap method to switch values at each index
    swap(greeting[i],greeting[n]);
	
	// Decrement because I am going from letter o to h in hellow
    n = n - 1;
  }
  cout << greeting << endl; // prints: olleh 
}
