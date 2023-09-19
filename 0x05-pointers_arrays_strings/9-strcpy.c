#include "main.h"
/**
* *_strcpy - the pointer function
* @dest: var dest
* @src: var src
* Return: return dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');

	return (dest);
}
