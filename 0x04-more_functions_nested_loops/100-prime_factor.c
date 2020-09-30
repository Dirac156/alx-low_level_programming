#include <stdio.h>
/**
 * main - Entry pont
 */



int main()
{
    int i, j, isPrime;
    long int num;
    /* Input a number from user */

  num = 612852475143;

    printf("All Prime Factors of %ld are: \n", num);

    /* Find all Prime factors */
    for(i=2; i<=num; i++)
    {
        /* Check 'i' for factor of num */
        if(num%i==0)
        {
            /* Check 'i' for Prime */
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }

            /* If 'i' is Prime number and factor of num */
            if(isPrime==1)
            {
                printf("%d, ", i);
            }
        }
    }

    return 0;
}
