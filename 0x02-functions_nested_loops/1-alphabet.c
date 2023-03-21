#include "holberton.h"

/**
 *print_alphabet : prints alphabet
 *void does not return
 */

void print_alphabet(void);
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
