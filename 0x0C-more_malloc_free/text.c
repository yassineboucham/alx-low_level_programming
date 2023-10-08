#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
* strl -  function that allocates memory using malloc
* @str: int
* Return: exit of return
*/
int strl(char *str)
{
	int i = 0;

	while (*str)
	i++;
	return (i);
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
unsigned int nb1, nb2, s, i = 0;

char *ptr;

nb1 = strl(s1);
nb2 = strl(s2);
if (n >= nb2)
n = nb2;
s = n + nb1;
ptr = malloc((s + 1) * sizeof(char));
if (!ptr)
ptr = NULL;
while (i < nb1)
{
	ptr[i] = s1[i];
	i++;
}
while (i < s)
{
	ptr[nb1 + 1] = s2[i];
	i++;
}
return (ptr);
}
