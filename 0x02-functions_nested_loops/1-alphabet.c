#include "main.h"

/**
 *print_alphabet : prints alphabet in description
 *decription:a function that prints the alphabet in lower case followed by a new line
 *return : return s nothing
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
