#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* create_array - array of chars, and initializes it with a specific char.
* @size: int
* @c: char
* Return: Returns a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
	return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	return (NULL);
	else
	{
		while (size-- > 0)
		ptr[size] = c;
		return (ptr);
	}
}
