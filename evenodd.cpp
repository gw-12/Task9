#include <iostream> 
   
using namespace std; 
   
// Function to calculate sum 
void EvenOddSum(int arr[], int n) 
{ 
    int even = 0; 
    int odd = 0; 
    for (int i = 0; i < n; i++) { 
        // Loop to find even, odd sum 
        if (i & 1 != 0) 
            odd += arr[i]; 
        else
            even += arr[i]; 
    } 
   
    cout << "Even index positions sum " << even; 
    cout << "\nOdd index positions sum " << odd; 
} 
   

int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
   
    EvenOddSum(arr, n); 
   
    return 0; 
}