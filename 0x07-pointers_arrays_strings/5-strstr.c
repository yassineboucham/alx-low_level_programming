#include "main.h"
/**
* *_strstr -  a function that locates a substring.
* @haystack:  string
* @needle: string
* Return: haystack
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
		return (haystack);
		needle++;
		}
			haystack++;
	}
	return ('\0');
}
