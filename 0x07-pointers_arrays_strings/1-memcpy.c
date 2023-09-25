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
	int i;

	while (n <= 0)
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	return (dest);
}
