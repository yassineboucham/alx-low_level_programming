#include <stdio.h>
#include "dog.h"

/**
* print_dog - function that prints a struct dog
* @d: struct dog
*/
void print_dog(struct dog *d)
{
	if (d)
	{
	if ((*d).name == NULL)
	return (NULL);
	else
	printf("Age: %s\n", (*d).age);
	if ((*d).owner == NULL)
	return (NULL);
	else
	printf("Owner: %s\n", (*d).owner);
	}
}
