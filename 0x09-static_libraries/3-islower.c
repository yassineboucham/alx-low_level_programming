#include "main.h"
/**
* _islower - check you lower char
* @c: the vairable for stoced the char
* Return: if 1 is lower if is 0 is not
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
