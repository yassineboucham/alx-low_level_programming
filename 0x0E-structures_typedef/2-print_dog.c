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
	if ((*d).name == NULL || !(*d).age || (*d).owner == NULL)
	printf("nil");
	else
	printf("Name: %s\nAge: %f\nOwner: %s", (*d).name, (*d).age, (*d).owner);
	}
}
