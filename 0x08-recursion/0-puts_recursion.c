#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: the variable s
*/
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	_putchar('\n');
_puts_recursion(s);
}
