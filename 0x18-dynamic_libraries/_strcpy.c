#include "main.h"

/**
 * _strcpy - Copies a string to another
 * @dest: The destination buffer
 * @src: The source string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /* null-terminate the destination string */
	return (start);
}
