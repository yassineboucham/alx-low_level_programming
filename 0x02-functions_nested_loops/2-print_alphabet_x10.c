#include "main.h"
/**
 * print_alphabet_x10 - print the th alphabet x 10
*/
void print_alphabet_x10(void)
{
int ch, i;
for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
