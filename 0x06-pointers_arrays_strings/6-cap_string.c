#include "main.h"
/**
* is_separator - for sepraiter
* @c: for char
* Return: 0 if is it seprator
*/
int is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
		c == ',' || c == ';' || c == '.' ||
		c == '!' || c == '?' || c == '"' ||
		c == '(' || c == ')' || c == '{' || c == '}'
	)
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

	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	for (; *str; str++)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		if (is_separator(*str))
		{
			str++;
			if (*str >= 'a' && *str <= 'z')
				*str++ -= 32;
			if (is_separator(*str))
			str--;
		}
	}
	return (str);
}
