 #include <stdio.h>
 
 int countnegativenumbers(int a[],int n)
 {
 	int i,c=0;
     for(i=0; i<n; i++)
    {
         
        if(a[i] < 0)
        {
            c++;
        }
    }
 	return c;
 }
int main()
{
    int a[1000],i=-1,-9,2,n;
   
    printf("Enter size of the array : ");
    printf("%d",n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        printf("%d",a[i]);
    }
 
             printf("  count  of negative numbers  in array: %d",countnegativenumbers(a,n));
 
 
    
}