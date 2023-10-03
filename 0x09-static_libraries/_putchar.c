#include "main.h"
#include <unistd.h>
/**
* _putchar - this function for printing a text as a char
* @c: char
*Return: return a char
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
