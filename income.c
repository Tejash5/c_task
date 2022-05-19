#include <stdio.h>
// function to calculate the income tax
float calculate_income_tax(float income, float tax)
{
    if (income <= 500000)
    {
        printf("\n NO TAX");
    }
    else if (income <= 1000000)
    {
        
        tax = income * 0.1;
        
        printf("tax is:%f", tax);
    }
    else if (income <= 2000000)
    {
    
        tax = income * 0.18;
        
        printf("tax is:%f", tax);
    }
    else if (income <= 3000000)
    {
        
        tax = income * 0.27;
        
        printf("tax is:%f", tax);
    }
    else
    {

        tax = income * 0.35;
        printf("tax is:%f", tax);
    }
}
int main()
{
    int income = 78900000, tax;
    // function calling
    calculate_income_tax(income, tax);
}