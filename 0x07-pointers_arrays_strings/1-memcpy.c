#include "main.h"
/**
* *_memcpy -a function that copies memory area
* @dest: pointer of dest
* @src: pointer of str
* @n: number
* Return: returing value dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
