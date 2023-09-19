#include "main.h"
/**
* *_strcpy - the pointer function
* @dest: var dest
* @src: var src
* Return: return dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while (src[i] > '\0')
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}
