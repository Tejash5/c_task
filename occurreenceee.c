 
#include <stdio.h>
int findOccurrence(int num,int digit)
{
    int rem, cnt;
  
    cnt=0;
    while(num>0)
    {
        rem=num%10;
        if(rem==digit)
            cnt++;
        num/=10;
    }    
    return cnt;
}
  
int main()
{
    int num = {1,2,4,7,7};
    int  digit=7, cnt;
  
   
  
    cnt=findOccurrence(num,digit);
     
    printf("Total occurrence of digit is: %d in number: %d.",digit,num);
    printf("\n");
      
    return 0;
}
