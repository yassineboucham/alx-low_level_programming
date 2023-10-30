#include "main.h"
/**
* clear_bit - a function that sets the value of a bit to 0 at a given index.
* @n: unsigned long int
* @index: unsigned int
* Return: n
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int nb;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	nb = 1 << index;
	*n = *n ^ nb;
	return (*n);
}
