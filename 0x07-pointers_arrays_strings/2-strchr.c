#include "main.h"
/**
* *_strchr - a function that locates a character in a string.
* @s: the poienter of a string
* @c: the character of astring
* Return: the return value is s
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
