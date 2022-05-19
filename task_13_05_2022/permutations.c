#include<stdio.h>
int fact (int);
int main()
{
    int n=9,r=7,npr;
    npr=fact(n)/fact(n-r);
    printf("\n;perumtation of %d and %d is %d \n",n,r,npr);
    return 0;
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return(f);
    
}   




