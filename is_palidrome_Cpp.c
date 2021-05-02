// FIRST WAY
// copy of string and check if it Is_Palidrome
#include <iostream>
using namespace std;

int main() {
  
  // original string
  string myStr1 = "hannah";
  // original string will be copied into second string
  string myStr2;

  // loop through first string to push the reverse into second string 	
  for(int n = myStr1.length()-1; n >= 0; n--){
    myStr2.push_back(myStr1[n]); // using push_back()
  }
  
  // print both strings 
  cout<<"Original string: "<< myStr1 << endl;
  cout<<"New reversed string: "<< myStr2 << endl;
  
  // compare both strings to find out if it is palidrome
  if (myStr1 == myStr2) {
	cout << "Is Palidrome";
  }
  else {
	cout << "Is NOT Palidrome";	
  }
}


////////////////////////////////////////////////
// SECOND WAY: Is_Palidrome taken out of main()
#include <iostream>
using namespace std;

void Is_Palidrome(string myInputStr1){
		
  // original string will be copied into second string
  string myStr2;

  // loop through first string to push the reverse into second string 	
  for(int n = myInputStr1.length()-1; n >= 0; n--){
    myStr2.push_back(myInputStr1[n]); // using push_back()
  }
  
  // print both strings 
  cout<<"Original string: "<< myInputStr1 << endl;
  cout<<"New reversed string: "<< myStr2 << endl;
  
  // compare both strings to find out if it is palidrome
  if (myInputStr1 == myStr2) {
	cout << "Is Palidrome";
  }
  else {
	cout << "Is NOT Palidrome";	
  }
		
}

int main() {
  
  string myStr1 = "hello";
  Is_Palidrome(myStr1);		
  return 0;
  
}
