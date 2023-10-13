#include "main.h"
int int_index(int *array, int size, int (*cmp)(int))
{
	cmp(array[size]);
}
