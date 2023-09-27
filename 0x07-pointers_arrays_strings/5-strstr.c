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
* @str: pointer
* @find: poiter
* Return: returing str posetion
*/
char *_strstr(char *str, char *find)
{
	char *ptr;
		ptr = ft_strchr(str, find[0]);
	if (ptr)
	{
		str = ptr;
		while (*ptr && *find)
		{
			if (*ptr++ != *find++)
				return (NULL);
		}
	return (str);
	}
	return (NULL);
}
