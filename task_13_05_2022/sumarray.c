#include <stdio.h>
void add_array(int array1[], int array2[], int array[], int size1, int size)
{
    int i;
    for (int i = 0; i < size1; i++)
    {
        array[i] = array1[i] + array2[i];
        printf("adding two arrays are:%d\n", array[i]);
    }
}
void print_array(int array[], int size1)
{
    printf("{");
    for (int i = 0; i < size1; i++)
    {
        printf("%d,", array[i]);
    }
    printf("}");
}
int main()
{
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {4,77,99,6,33};
    int size1 = sizeof(array1) / sizeof(int);
    int size2 = sizeof(array2) / sizeof(int);
    int array[size1];
    int size = sizeof(array) / sizeof(int);
    add_array(array1, array2, array, size1, size);
    print_array(array, size1);
    printf("\n");
}