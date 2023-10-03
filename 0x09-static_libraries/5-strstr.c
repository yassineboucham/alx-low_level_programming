#include "main.h"
#include <stddef.h>
/**
* _strstr - find the first occurrence of a substring in a string
* @haystack: the string to search in
* @needle: the substring to search for
*
* Return: a pointer to the beginning of the located substring,
*         or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *hay_ptr = haystack;

		char *nee_ptr = needle;

		while (*nee_ptr != '\0' && *hay_ptr == *nee_ptr)
		{
			hay_ptr++;
			nee_ptr++;
		}

		if (*nee_ptr == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
