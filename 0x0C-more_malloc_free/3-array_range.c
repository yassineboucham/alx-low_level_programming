#include "main.h"
#include <stdlib.h>
/**
* *array_range - a function that creates an array of integers
* @min: int
* @max: int
* Return: int
*/
int *array_range(int min, int max)
{
	int *ptr, i, j = 0, s;

	if (min > max)
	return (NULL);
	s = (max - min) + 1;
	ptr = malloc(sizeof(int) * s);
	if (ptr == NULL)
	return (NULL);
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
