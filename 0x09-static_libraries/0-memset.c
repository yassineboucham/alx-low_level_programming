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
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
		return (s);
}
