#include <stdio.h>
void even(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {

            printf("%d ", arr[i]);
        }
    }
}
int main()
{
    int array[] = {104, 11, 13, 43, 79, 69,88,99,1000};
    int len = sizeof(array) / sizeof(int);
    printf("even elements are:");
    even(array, len);
    printf("\n");
    return 0;
}