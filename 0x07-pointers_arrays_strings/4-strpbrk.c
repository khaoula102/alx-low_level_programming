#include "main.h"
/**
* _strpbrk - Entry point
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *acc)
{
int k;

while (*s)
{
for (k = 0; acc[k]; k++)
{
if (*s == acc[k])
return (s);
}
s++;
}

return ('\0');
}
