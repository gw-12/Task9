#include <stdio.h>


void findMinMax(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];

    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        else if (arr[i] > max)
            max = arr[i];
    }

    
    printf("min-%d max-%d\n", min, max);
}

int main()
{

    int arr[] = { 3,1,4,6,2,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    findMinMax(arr, n);

    return 0;
}