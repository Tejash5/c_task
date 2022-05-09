#include<stdio.h>
int main()
{
    int arr[10] = {1,4,7,8,9,87,6,13},i;
        for(i=0; i<10; i++)
        printf("%d", arr[i]);
    printf("\nOdd Array elements are:\n");
    for(i=0; i<10; i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ", arr[i]);
            printf("\n");
        }
    }
    return 0;
}