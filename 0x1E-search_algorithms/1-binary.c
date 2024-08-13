#include <stdio.h>
#include <stdlib.h>
/**
* binary_search - Binary search algorithm
* @array:  array is a pointer to the first element
* @array:  is a pointer to the first element of the array to search
* @size: is the number of elements in array
* @value: value is the value to search
* Return: 0
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);
	l = 0;
	r = size - 1;
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (array[i] == value)
			return (value);
		if (array[i] > value)
			r = l - 1;
		else
			l = i + 1;
	}
	return (-1);
}
