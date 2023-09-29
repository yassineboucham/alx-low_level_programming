#include "main.h"
/**
* _print_rev_recursion -  a function that prints a string in reverse.
* @s: pointer
*/
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	if (i == 0)
	_putchar('\n');
	else
	{
		_putchar(*s);
		_print_rev_recursion(s - i);
		i--;
	}
}
