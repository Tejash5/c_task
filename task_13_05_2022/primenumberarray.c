
#include <stdio.h>
int countPrimes(int element_list[], int elements)

{

    int primeIndex=0;

    int i, n;

for (n=0; n < elements; n++)

    {

        for (i=2;i <= n ;i++) //I check vor every number between 2 and the array number if modul = 0 or not.

        {
            if (element_list[n] % i != 0)

            {

 
                primeIndex++; //if it is a PrimeNumber, I add 1 to the Index
            }

        }

    }

return primeIndex; //I return the calculated PrimeIndex back to the main function

}

 
 
int main ()

{

    int test[] = {1,2,3,11,12,7}; //My Input Array

    int  test_length = sizeof(test) / sizeof(test[0]); //How many elements are in the array

    printf("there are %d Primenumbers in the Array.\n", countPrimes(test,test_length)); //print the counted Prime numbers

 
    return 0;
}
