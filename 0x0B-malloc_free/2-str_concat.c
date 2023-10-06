#include "main.h"
#include <stdlib.h>

/**
* _strlent - returns the length of a string
* @s: string
* Return: int
*/
int _strlent(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
* str_concat - concatenates two strings and returns a pointer to the new string
* @s1: first string
* @s2: second string
* Return: char pointer to the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	int i, j = 0;

	char *ptr;

	int size1 = (s1 == NULL) ? 0 : _strlent(s1);

	int size2 = (s2 == NULL) ? 0 : _strlent(s2);

	ptr = malloc((size1 + size2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < size2; j++)
		ptr[i + j] = s2[j];

	ptr[i + size2] = '\0';
	return (ptr);
}
