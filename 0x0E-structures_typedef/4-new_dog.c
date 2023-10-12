#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * *_strdup - dup
 * @src: char
 * Return: ptr
*/
char *_strdup(char *src)
{
	int i, size = 0;

	char *ptr;

	if (!src)
	return (NULL);
	while (src[size])
	size++;
	ptr = malloc(size * sizeof(char));
	if (!ptr)
	return (NULL);
	for (i = 0; src[i]; i++)
		ptr[i] = src[i];
	ptr[i] = '\0';
	return (ptr);
}
/**
 * *new_dog -  a function that creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: new_b
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
	return (NULL);
	(*new_d).name = _strdup(name);
	(*new_d).age = age;
	(*new_d).owner = _strdup(owner);
	return (new_d);
}
