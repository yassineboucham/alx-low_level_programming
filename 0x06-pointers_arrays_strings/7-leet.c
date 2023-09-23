#include "main.h"
/**
 * *leet -  a function that encodes a string into 1337.
 * @str: the pointer of a string
 * Return: returning str
*/
char *leet(char *str)
{
	char *ptr = str;

	char let[] = {'A', 'E', 'O', 'T', 'L'};

	int nb[] = {4, 3, 0, 7, 1};

	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(let) / sizeof(char); i++)
		{
			if (*str == let[i] || *str == let[i] + 32)
			*str = 48 + nb[i];
		}
		str++;
	}
	return (ptr);
}
