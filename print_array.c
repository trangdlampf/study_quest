#include <iostream>
using namespace std;

int main()
{
    // Array declaration and initialization
    // int myArray[6] = {4, 12, 7, 15, 9, 2};
    // Or another way to declar array
    int myArray[] = {4, 12, 7, 15, 9, 2};
    
    // Get size of Array
    int arrSize = sizeof(myArray)/sizeof(myArray[0]);
  
    // Iterate over the array
    for(int x=0; x<arrSize; x++)
    {
        // Print out each element in a new line
        cout << myArray[x] << endl;
    }
    return 0;
}
