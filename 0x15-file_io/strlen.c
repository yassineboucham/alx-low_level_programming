#include "main.h"
/**
* sstrlen - len of a string
* @string: string
* Return: lent
*/
int sstrlen(char *string)
{
	int i = 0;

	while (*string++)
	i++;
	return (i);
}
