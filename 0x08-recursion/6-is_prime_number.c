#include "main.h"

int actual_prime(int n, int i);

/**
* is_prime_number - says if an integer is a prime number or not
* @a: number to evaluate
*
* Return: 1 if a is a prime number, 0 if not
*/
int is_prime_number(int a)
{
if (n <= 1)
return (0);
return (actual_prime(a, a - 1));
}

/**
* actual_prime - calculates if a number is prime recursively
* @n: number to evaluate
* @i: iterator
*
* Return: 1 if n is prime, 0 if not
*/
int actual_prime(int a, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (actual_prime(a, i - 1));
}

