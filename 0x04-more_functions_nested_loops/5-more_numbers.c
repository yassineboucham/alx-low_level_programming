#include "main.h"
/**
* more_numbers -  function that prints 10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
	int i, j, nb;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (j < 9)
			{
				_putchar('0' + j);
			}
			else
			{
				nb = j % 10;
				_putchar('0' + 1);
				_putchar('0' + nb);
			}
		}
		_putchar('\n');
	}
}
