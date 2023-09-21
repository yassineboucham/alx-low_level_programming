#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: the pointer of array
 * @n: number of elements
*/
void reverse_array(int *a, int n)
{
	int k, j, nf;

	for (k = n - 1, j = 0; j < n / 2; k--, j++)
	{
		nf = a[k];
		a[k] = a[j];
		a[j] = nf;
	}
}
