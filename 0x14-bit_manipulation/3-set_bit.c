#include "main.h"
/**
* set_bit - a function that sets the value of a bit to 1 at a given index.
* @n: unsigned long int
* @index: unsigned int
* Return: n
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int nb;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	nb = 1 << index;
	*n = *n | nb;
	return (*n);
}
