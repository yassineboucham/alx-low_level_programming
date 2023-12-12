#include "main.h"

/**
 * _strncpy - Copies n characters from src to dest
 * @dest: The destination buffer
 * @src: The source string
 * @n: Number of characters to copy
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0'; /* pad remaining space with null bytes */
		dest++;
		n--;
	}

	return (start);
}
