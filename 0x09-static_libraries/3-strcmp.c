#include "main.h"
/**
* _strspn - a function that gets the length of a prefix substring.
* @s: a pointer of a string
* @accept: a pointer of a string
* Return: returning i
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
