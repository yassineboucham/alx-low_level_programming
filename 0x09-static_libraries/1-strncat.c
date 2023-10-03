#include "main.h"
/**
* *_strncat - The _strncat function is similar to the _strcat function
* @dest: the dest char
* @src: the src char
* @n: the number of char
* Return: the return value is dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
