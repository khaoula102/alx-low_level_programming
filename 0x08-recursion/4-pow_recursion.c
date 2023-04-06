#include "main.h"

/**
* _pow_recursion - returns the value of t raised to the power of s
* @t: value to raise
* @s: power
*
* Return: result of the power
*/
int _pow_recursion(int t, int s)
{
if (s < 0)
return (-1);
if (s == 0)
return (1);
return (t * _pow_recursion(t, s - 1));
}

