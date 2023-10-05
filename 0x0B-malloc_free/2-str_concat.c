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
int j = 0, i = 0;
char *ptr;
ptr = (char *)malloc((strlent(s1) + (strlent(s2) + 1)) * sizeof(char));
if (ptr == NULL)
return (NULL);
while (s1[j] && s1)
{
ptr[j] = s1[j];
j++;
}
while (s2[i] && s2)
ptr[j++] = s2[i++];
ptr[j++] = '\0';
return (ptr);
}
