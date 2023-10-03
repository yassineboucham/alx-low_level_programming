#include "main.h"
/**
* *_strncpy -  The standard library provides a similar function: strncpy
* @dest: the dest variable
* @src: the src variable
* @n: the nuber of sourse
* Return: returning dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
