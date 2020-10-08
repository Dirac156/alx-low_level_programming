#include "holberton.h"

/**
 *check_num - recursion loop
 *@num: number
 *@i: iterator
 *Return: returns 1 or 0
 */

int check_num(int num, int i)
{

if (i == num - 1)
{
return (1);
}

else if (num % i == 0)
{
return (0);
}

if (num % i != 0)
{
return (check_num(num, i + 1));
}

return (0);

}

/**
 *is_prime_number - evaluate prime or not
 *@num: number
 *Return: Return 1 if Prime, 0 if otherwise
 */

int is_prime_number(int num)
{

int iter;

iter = 2;

if (num < 2)
{
return (0);
}
if (num == 2)
{
return (1);
}

return (check_num(num, iter));
}
