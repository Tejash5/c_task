#include <stdio.h>
// function to find the index of element
void index_element(int array[], int index, int length, int element, int i)
{
    for (i = 0; i < length; i++)
    {
        if (element == array[i])
            index = i;
    }
    // printing the index of the element
    printf("INDEX of the given element:%d\n", index);
}
int main()
{
    int i, index, element = 8;
    
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int length = sizeof(array) / sizeof(int);
    // index element function calling
    index_element(array, index, length, element, i);
}