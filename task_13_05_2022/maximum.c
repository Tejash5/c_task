#include <stdio.h>
max(int [],int);
void main()
{
	int a[]={10,5,50,40,89};
	int n=5,m;
	m=max(a,n);
	printf("\nMAXIMUM NUMBER IS %d \n",m);
}
max(int x[],int k)
{
	int t,i;
	t=x[0];
	for(i=1;i<k;i++)
        {
		if(x[i]>t)
			t=x[i];
	}
	return(t);
	printf("\n");
}