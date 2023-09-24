#include "main.h"

/**
* *rot13 -  function that encodes a string using rot13
* @str: pointer of str
* Return: returning str
*/
char *rot13(char *str)
{
	char alphabic[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char Rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	char *ptr = str;

	int i;

	while (*str)
	{
		for (i = 0; i < 52; i++)
		{
		if (*str == alphabic[i])
		{
			*str = Rot13[i];
			break;
		}
		}
		str++;
	}
	return (ptr);
}
