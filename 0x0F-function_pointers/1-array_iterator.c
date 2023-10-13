#include "main.h"
/**
* array_iterator - function given as a parameter on each element of an array.
* @array: int
* @size: size_t
* @action: void fun
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
