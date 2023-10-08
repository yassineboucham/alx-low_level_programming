#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - function that returns a pointer
 * @width: int
 * @height: int
 * Return: int
*/
int **alloc_grid(int width, int height)
{
	int i;

	int **ptr;

	if (width <= 0 || height <= 0)
	return (NULL);
	while (i < height)
	{
		ptr[i] = calloc(width, sizeof(int));
		if (!ptr[i])
			return (NULL);
		i++;
	}
return (ptr);
}
