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
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %d\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
