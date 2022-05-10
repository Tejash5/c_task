#include<stdio.h>
#include <string.h>
int isStartWithSubstr(char *string, char *substring)
{
    int substringLength = strlen(substring);
    for(int i = 0; i < substringLength; i++)
    {
        if(string[i] != substring[i]){
            return 0;
        }
    }
    return 1;
}
int main()
{   
    char string[] = "appleorange";
    char substring[] = "apple";
    
    if(isStartWithSubstr(string, substring)){
        printf("The String is start with  %s",substring);
    }
    else{
        printf("The String is NOT start with %s",substring);
    }
      printf("\n");
    return 0;
}