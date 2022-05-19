#include<stdio.h>
#include<stdbool.h>

    bool is_even_odd(int number)
{
    if (number % 2 == 0)
    {
        // printing the given number is even
        printf("the given number is even:%d", number);
        return true;
    }
    else
        // printing the given number is odd
        printf("the given number is odd\n");
    return false;
}
int main()
{
    int number = 8, i, count = 0;
    // prime function calling
    is_prime_number(number, i, count);
    // even and odd function calling
    is_even_odd(number);
}