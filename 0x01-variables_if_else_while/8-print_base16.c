#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char a;
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
for (a = 'a'; a < 'g'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
