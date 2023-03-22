#include "main.h"

/**
 *print_alphabet : prints alphabet
 *decription of the fct :  a function that prints the alphabet, in lowercase, followed by a new line.
 *return : void does not return
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
