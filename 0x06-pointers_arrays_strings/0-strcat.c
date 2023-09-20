#include "main.h"
/**
* *_strcat - This function appends the src string to the dest string
* @dest: the destination
* @src: the sourse
* Return: returning dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	i++;
	i--;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
		return (dest);
}
