#include<stdio.h>
#include<math.h>
int main()
{
 
    printf("Enter a Number to Find Factorial: ");
    printf("\nFactorial of a Given Number is: %d\n",fact());
    return 0;
}
int fact()
{
    int i,fact=1,n=5;
    printf("%d",n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
   
}