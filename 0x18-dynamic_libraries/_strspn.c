#include "main.h"

/**
* _strspn - Gets the length of a prefix substring consisting of only
* characters in @accept
* @s: The string to check
* @accept: The characters to include in the prefix substring
* Return: The length of the prefix substring
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && _strchr(accept, *s))
	{
		count++;
		s++;
	}

	return (count);
}
