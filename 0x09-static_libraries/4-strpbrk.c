#include "main.h"
/**
* *_strpbrk -  function that searches a string for any of a set of bytes
* @s: ponter of a string
* @accept: pointer of a sting
* Return: returing s
*/
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
