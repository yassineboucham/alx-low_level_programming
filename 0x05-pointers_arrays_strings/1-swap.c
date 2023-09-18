#include "main.h"
/**
* swap_int -  a function that swaps the values of two integers
* @a: the pointer 1
* @b: the pointer 2
*/
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
