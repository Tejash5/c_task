#include <stdio.h>
// function to calculate the mean
void mean_array(float mean, int sum, int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    mean = sum / size;
   
    printf("Sum of given array is :%d\n", sum);
    
    printf("\nmean of array is %f\n", mean);
}
int main()
{
    float mean = 0;
    int sum = 0;
    int array[] = {1, 22, 36, 4, 5, 69, 7};
    int size = sizeof(array) / sizeof(int);
    // mean function calling
    mean_array(mean, sum, array, size);
}