#include "main.h"
/**
* _strspn - a function that gets the length of a prefix substring.
* @s: a pointer of a string
* @accept: a pointer of a string
* Return: returning i
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 1;

	while (*s)
	{
		while (*s != *accept)
		{
			if (*accept == '\0')
			return (i);
			i++;
			accept++;
		}
		s++;
	}
	return (i);
}
