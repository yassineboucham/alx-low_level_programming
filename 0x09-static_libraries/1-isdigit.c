#include "main.h"
/**
 * _isdigit - the to the number digit
 * @c: variable for stoced the number
 * Return: if is digit is 1 else 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
