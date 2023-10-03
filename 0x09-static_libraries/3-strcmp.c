#include "main.h"
/**
* _strcmp - The standard library provides a similar function: strcmp
* @s1: the s1 var
* @s2: the S2 var
* Return: returning res
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0'  && *s1 == *s2)
{
	s1++;
	s2++;
}
return (*s1 - *s2);
}
