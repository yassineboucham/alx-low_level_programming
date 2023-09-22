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
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	for (; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (is_separator(str[i]))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i++] -= 32;
			if (is_separator(str[i]))
			i--;
		}
	}
	return (str);
}
