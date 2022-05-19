#include <stdio.h>
// function to find fibonacci
void fibonacci(int first_num, int second_num, int length, int array[])
{
  
    int fibonacci_num;
    for (int i = 2; i < length; i++)
    {
        fibonacci_num = first_num + second_num;
        first_num = second_num;
        second_num = fibonacci_num;
        // printng fibonacci series
        printf("%d ", fibonacci_num);
    }
}
int main()
{
    int i;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int length = sizeof(array) / sizeof(int);
    fibonacci(1, 2, 10, array);
}