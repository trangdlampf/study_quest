// Example of Bubble Sort for Array of Numbers
#include <bits/stdc++.h>
using namespace std;

// Set up variables and temp_variable to sort
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// Implements bubble sort 
void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)     
      
    // Last i elements are already in place 
    // Compares 1st and 2nd element during 1st iteration of for_loop  
    for (j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) 
            swap(&arr[j], &arr[j+1]); 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]);
  
    // calls bubbleSort
    bubbleSort(arr, n); 
    cout<<"Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
} 
