#include "main.h"
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

	for (i = 0; s1[i] != '\0'; i++)
	{
		length1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		length2++;
	}

	if (n >= length2)
		n = length2;

	length = length1 + n;

	ptr = malloc((length + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
	{
		ptr[i] = s1[i];
	}
	for (; i < n ; i++)
	{
		ptr[i] = s2[i];
	}
	ptr[length1 + i] = '\0';
	return (ptr);
}
