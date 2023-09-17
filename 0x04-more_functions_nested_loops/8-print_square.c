#include "main.h"
/**
* print_square - Write a function that prints a square
* @size: variable of with and hite of square
*/
void print_square(int size)
{
	if (size > 0)
	{
	int w, h;

	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
else
_putchar('\n');
}
