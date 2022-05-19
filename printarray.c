#include <stdio.h>
void printArray(int arr[], int start, int size);
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int i;
   int size=sizeof(arr)/sizeof(int);
    for(i=0; i<size; i++) 
    {
        printf("%d",arr[i]);
    }
    printArray(arr,0,size);
    return 0;
}
void printArray(int arr[], int start, int size)
{
    if(start >= size)
        return;
    printf("%d, ", arr[start]);
    printArray(arr, start + 1, size); 
    printf("\n");
}