#include <stdio.h>
#include <stdlib.h>
void merge_two_arrays(int a[],int b[],int c[],int size1,int size2,int size3)
{
    int j = 0;
    int k = 0;
    for (int i = 0; i < size3; i++)
    {
        if (a[j] <= b[k])
        {
            c[i] = a[j];
            j++;
        }
        else
        {
            c[i] = b[k];
            k++;
        }
    }
     printf("Merged array is :\n");
    for ( int i = 0; i < size3; i++)
    { 
        printf("c[%d]=%d\n", i, c[i]);
    }
}
int main()
{
    int a[] = {1, 3, 4};
    int b[] = {1, 7, 9};
    int size1 = sizeof(a) / sizeof(int);
    int size2 = sizeof(b) / sizeof(int);
    int size3 = size1 + size2;
    int c[size3];
    int i, j, k, temp;
    printf("Elements of Array1\n");
    for (int i = 0; i < size1; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }
    printf("Elements of Array2\n");
    for (i = 0; i < size2; i++)
    {
        printf("b[%d]=%d\n", i, b[i]);
    }
    merge_two_arrays(a,b,c,size1,size2,size3);
    
  
}