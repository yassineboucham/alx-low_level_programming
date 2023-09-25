#include "main.h"
/**
* *_strchr - a function that locates a character in a string.
* @s: the poienter of a string
* @c: the character of astring
* Return: the return value is s
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
			break;
		}
			s++;
	}
	return ('\0');
}
