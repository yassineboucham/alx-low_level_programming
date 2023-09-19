#include "main.h"
/**
* *_strcpy - the pointer function
* @dest: var dest
* @src: var src
* Return: return dest
*/
char *_strcpy(char *dest, char *src)
{
	for (*dest = '\0'; *src != '\0'; dest++)
	{
	*dest = *src;
	src++;
	}
	return (dest);
}
