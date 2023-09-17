#include "main.h"
/**
* print_triangle -  a function that prints a triangle
* @size: the size of triangle
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if ((i + j) <= size)
				_putchar(' ');
				else
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
