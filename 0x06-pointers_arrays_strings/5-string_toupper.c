#include "main.h"
/**
* *string_toupper - a function that changes a string to uppercase
* @str: a pointer for a char
* Return: str
*/
char *string_toupper(char *str)
{

while (*str)
{
	if (*str >= 'a' && *str <= 'z')
	*str -= 32;
	str++;
}
return (str);
}
