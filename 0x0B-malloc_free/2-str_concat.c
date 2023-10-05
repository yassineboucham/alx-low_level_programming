#include "main.h"
#include <stdlib.h>
/**
* strlent -  returns a pointer to a newly allocated space in memory
* @str: string
* Return: int
*/
int strlent(char *str)
{
	int i = 0;

	while (*str++)
	i++;
	return (i);
}
/**
* str_concat -  returns a pointer to a newly allocated space in memory
* @s1: char
* @s2: char
* Return: int
*/
char *str_concat(char *s1, char *s2)
{
int i;

char *ptr;
int size1 = strlent(s1);
int size2 = strlent(s2);
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
else
{
	ptr = malloc((size1 + size2) * sizeof(char) + 1);
if (ptr == 0)
return (0);
for (i = 0; i <= (size1 + size2); i++)
{
	if (i < size1)
		ptr[i] = s1[i];
	else
		ptr[i] = s2[i - size1];
}
}
ptr[i] = '\0';
return (ptr);
}
