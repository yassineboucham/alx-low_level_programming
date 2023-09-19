#include "main.h"
/**
* print_rev - function that prints a string, in reverse
* @s: the poienter of string
*/
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (i != 0)
	{
		i--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
