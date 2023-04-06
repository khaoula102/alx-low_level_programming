#include "main.h"

/**
* factorial - returns the factorial of a number
* @n: number to return the factorial from
*
* Return: factorial of n
*/
int factorial(int t)
{
if (n < 0)
return (-1);
if (t == 0)
return (1);
return (t * factorial(t - 1));
}

