#include "main.h"
/**
* puts_half - a function that prints half of a string
* @str: the variable
*/
void puts_half(char *str)
{
int i = 0;

for (; str[i] != '\0';)
i++;
for (i = i / 2; i != '\0'; i++)
{
	_putchar(str[i]);
}
}
