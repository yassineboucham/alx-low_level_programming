#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* main - check the code
*
* Return: Always EXIT_SUCCESS.
*/
int main(void)
{
	char *s;

	s = "cisfun";
	printf("%u\n", hash_djb2((unsigned char *)s));
	s = "Don't forget to tweet today";
	printf("%u\n", hash_djb2((unsigned char *)s));
	s = "98";
	printf("%u\n", hash_djb2((unsigned char *)s));
	return (EXIT_SUCCESS);
}
