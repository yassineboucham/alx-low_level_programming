#include "main.h"

/**
 * _memset - Fills the first n bytes of memory with a constant byte
 * @s: The memory area to fill
 * @b: The constant byte
 * @n: Number of bytes to fill
 * Return: Pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (start);
}
