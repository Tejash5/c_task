#include <stdio.h>
#include <stdbool.h>

bool is_prime_number(int number, int i, int count)
{
    if (number == 0)
        return false;
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {

        printf("\n%d is a Prime number\n", number);
    }
    else
    {

        printf("\n%d is not a Prime number\n", number);
    }
    return true;
 
}