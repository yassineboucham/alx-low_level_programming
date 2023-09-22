#include "main.h"
/**
* is_lower - for lower
* @c: for char
* Return: 0 if is it lower
*/

int is_lower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
* is_separator - for sepraiter
* @c: for char
* Return: 0 if is it seprator
*/
int is_separator(char c)
{
	int j;

	char sep[] = " \t\n,;.!?\"(){}";

	for (j = 0; j < 12; j++)
		if (c == sep[j])
		return (1);
	return (0);
}
/**
* *cap_string - a function that capitalizes all words of a string.
* @str: the string
* Return: str
*/
char *cap_string(char *str)
{
	char *ptr = str;
	int separator = 1;
while (*str)
{
	if (is_separator(*str))
	separator = 1;
	else if (is_lower(*str) && separator)
	{
		*str -= 32;
		separator = 0;
	}
	else
		separator = 0;
	str++;
}

	return (ptr);
}
