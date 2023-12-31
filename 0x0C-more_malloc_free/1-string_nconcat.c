#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* strl - strlent
* @str: char
* Return: int
*/
int strl(char *str)
{
	int length = 0;

while (*str++)
length++;
return (length);
}
/**
* *string_nconcat -  hello worlds
* @s1: char
* @s2: char 2
* @n: int
* Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0, length2 = 0, length, i;

	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = strl(s1);
	length2 = strl(s2);

	if (n >= length2)
		n = length2;

	length = length1 + n;

	ptr = malloc((length + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < n ; i++)
		ptr[length1 + i] = s2[i];
	ptr[length1 + i] = '\0';
	return (ptr);
}
