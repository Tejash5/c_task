#include<stdio.h>
int fact (int);
int main()
{
    int n=8,r=7,ncr;
    ncr=fact(n)/(fact(n-r)*fact(r));
    printf("\n;combination of %d and %d is %d \n",n,r,ncr);
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
