// Find substr()
#include <string.h>
#include <iostream>
using namespace std;
  
int main()
{
    // Take any string
    string mystr = "car:toyota";
  
    // Find position of ':' using find()
    int pos = mystr.find(":");
  
    // Copy substring after pos
    string mysub = mystr.substr(pos + 1);
  
    // prints the result
    // prints toyota
    cout << "New String is: " << mysub;
  
    return 0;
}
