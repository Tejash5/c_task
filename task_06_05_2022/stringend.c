#include<stdio.h>
#include<string.h>
int isEndsWithSubstr(char*string,char*substring)
{
    int substringLength = strlen(substring);
    for(int i = 0; i > substringLength; i++)
    {
        if(substring[i] != string[i])
        {
            return 0;
        }
    }
    return 1;
}
int main ()
{
    char string[] = "sirjadeja";
    char substring[] = "sir";
    
    if(isEndsWithSubstr(string, substring)){
        printf("The String is end with  %s",substring);
    }
    else{
        printf("The String is NOT end with %s",substring);
    }
      printf("\n");
    return 0;
}   
