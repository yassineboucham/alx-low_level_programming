#include "main.h"
#include <stdlib.h>
/**
* _memset - The memory is set to nb
* @p: pointer of char
* @s: char
* @size: int
* Return: p
*/
char *_memset(char *p, char s, int size)
{
	int i;

	char *ptr = p;

	for (i = 0; i < size; i++)
	p[i] = s;
	return (ptr);
}
/**
* *_calloc - function that allocates memory for an array, using malloc
* @nmemb: int
* @size: u int
* Return: ptr
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == 0)
	return (NULL);
	_memset(ptr, 0, sizeof(int) * nmemb);
	return (ptr);
}
