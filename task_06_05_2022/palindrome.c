#include <stdio.h>
#include <string.h>

void isPalindrom(char str[],int index)
{
    int len = strlen(str)-(index+1);
if (str[index] == str[len]) 
{
        if (index+1==len || index==len) 
        {
            printf("String is a palindrome\n");
            return;
        }
        isPalindrom(str,index+1);
    }
    else 
    {
        printf("String is not a palindrome\n");
    }
}
int main()
{
    char str[]=("madam");
    int flag=0;
    isPalindrom(str,0);
    printf("\n");

    return 0;
}