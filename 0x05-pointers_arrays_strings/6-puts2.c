#include "main.h"
/**
* puts2 -  a function that prints every other character of a string
* @str: vaiable string
*/
void puts2(char *str)
{

while (*str != '\0')
{
	if (*str % 2 == 0)
	_putchar(*str);
    str++;
}
_putchar('\n');
}
