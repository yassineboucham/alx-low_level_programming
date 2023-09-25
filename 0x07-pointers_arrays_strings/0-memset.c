#include "main.h"
/**
* *_memset - a function that fills memory with a constant byte.
* @s: the pointer of a string
* @b: the char
* @n: the nuber
* Return: returing str
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
