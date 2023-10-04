#include "main.h"
#include <stdlib.h>
/**
* strlent -  returns a pointer to a newly allocated space in memory
* @str: string
* Return: i
*/
int strlent(char *str)
{
	int i = 0;

	while (*str++)
	i++;
	return (i);
}
/**
* _strdup -  returns a pointer to a newly allocated space in memory
* @str: string
* Return: ptr
*/
char *_strdup(char *str)
{
int j = 0;

char *ptr;

if (!str)
return (NULL);
ptr = (char *)malloc(strlent(str) * sizeof(char));
while (str[j])
{
	ptr[j] = str[j];
	j++;
}
return (ptr);
}
