#include "main.h"

/**
 * _strncat - Concatenates n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: Number of characters to concatenate
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest)
		dest++;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0'; /* null-terminate the destination string */
	return (start);
}
