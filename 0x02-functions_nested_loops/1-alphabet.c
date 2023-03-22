#include "main.h"

/**
 *print_alphabet : prints alphabet in description
 *decription: prints the alphabet in lower case followed by a new line
 *Return :  nothing
 */

void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
