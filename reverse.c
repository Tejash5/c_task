#include <stdio.h>
 
// Function to print contents of an array
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
 
// Function to reverse elements of an array
void reverse(int arr[], int n)
{
    for (int low = 0, high = n - 1; low < high; low++, high--)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
    }
}
 
int main(void)
{
    int arr[] = { 21,23,45,67,78};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    reverse(arr, n);
    print(arr, n);
    printf("\n");
 
    return 0;
}
