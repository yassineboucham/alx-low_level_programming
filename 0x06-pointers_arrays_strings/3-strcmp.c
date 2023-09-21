#include "main.h"
/**
* _strcmp - The standard library provides a similar function: strcmp
* @s1: the s1 var
* @s2: the S2 var
* Return: returning res
*/
int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			res += (int)*s1 - (int)*s2;
			break;
		}
		s1++;
		s2++;
	}
	return (res);
}
