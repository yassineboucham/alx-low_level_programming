#include "main.h"

/**
* _strlen - a function that returns the length of a string
* @s: the pointers of the string
* Return: retuning the lent of s
*/
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	count++;
	return (count);
}
