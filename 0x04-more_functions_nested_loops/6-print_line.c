#include "main.h"
/**
* print_line - Write a function that draws a straight line in the termina
* @n: the nuber of _
*
*/
void print_line(int n)
{
	int i;

	if (n > 0)
{
	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
else
_putchar('\n');
}
