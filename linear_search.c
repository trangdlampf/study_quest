// C++ code to linearly search x in arr[]. If x
// is present then return its location 
#include <iostream>
using namespace std;
 
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x) // if number is array is equal to number I am trying to find
            return i;    // return the position/index of that number in the array 
    return -1;
}
 
// Driver code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 }; // this array is already sorted
    int x = 4; // number I am searching for
    int n = sizeof(arr) / sizeof(arr[0]);
   
    // Function call
    int result = search(arr, n, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
