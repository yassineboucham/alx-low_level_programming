#include <stdio.h>
#include <stdlib.h>
/**
* linear_search - the Linear search algorithm
* @array:  is a pointer to the first element of the array to search
* @size: is the number of elements in array
* @value: value is the value to search
* Return: 0
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)

	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
