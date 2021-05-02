// FIRST WAY
#include <iostream>
using namespace std;

int main() {
 
  string myStr1 = "Hello";
  int len = myStr1.length(); 	// get length of string
  int n = len - 1;		// subtract 1 to get index
  
  // loop through the string
  for(int i=0; i<(len/2); i++){
	  
    // Use swap method to switch values at each index
    swap(myStr1[i],myStr1[n]);
	
    // Decrement because I am going from letter o to h in hello
    n = n - 1;
  }
  cout << myStr1 << endl; // print
}

///////////////////////////////////////////
// SECOND WAY
// DOES SAME: function taken out of main()
#include <iostream>
using namespace std;

void reverseStr(string& myinputstr) {
	
    int len = myinputstr.length(); 	// get length of string
    int n = len - 1;			// subtract 1 to get index
	
    // loop through the string
    for(int i=0; i<(len/2); i++){
	  
	//Using the swap method to switch values at each index
	swap(myinputstr[i],myinputstr[n]);
		
	// Decrement because I am going from letter o to h in hellow
	n = n - 1;
    }		
}

int main() { 

	string myStr1 = "Hello";
	reverseStr(myStr1);
	cout << myStr1;
		
}
