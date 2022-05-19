#include <stdio.h>
// Function to find the absolute value
void absolute(int number)
{
 
    if (number < 0)
    {
        number = (-1) * number;
        printf("%d\n", number);
    }
    else
        // Print the absolute value
        printf("%d ", number);
}
int main()
{
    int number = -18;
   
    absolute(number);
    return 0;
}