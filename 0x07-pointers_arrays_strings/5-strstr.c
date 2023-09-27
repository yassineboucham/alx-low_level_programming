#include "main.h"
#include <stddef.h>
/**
* *ft_strchr - serch for c
* @str: pointer
* @c: char
* Return: returing str posetion
*/
char *ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}
/**
* *_strstr - a function that locates a substring.
* @haystack: pointer
* @needle: poiter
* Return: returing str posetion
*/
char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	if (*needle == '\0')
	{
		return (haystack);
	}
		ptr = ft_strchr(haystack, needle[0]);
	if (ptr)
	{
		haystack = ptr;
		while (*ptr && *needle)
		{
			if (*ptr++ != *needle++)
				return (NULL);
		}
	return (haystack);
	}
	return (NULL);
}
