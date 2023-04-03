#include "main.h"
/**
* _strspn - Entry point
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *acc)
{
unsigned int n = 0;
int r;

while (*s)
{
for (r = 0; acc[r]; r++)
{
if (*s == acc[r])
{
n++;
break;
}
else if (acc[r + 1] == '\0')
return (n);
}
s++;
}
return (n);
}

