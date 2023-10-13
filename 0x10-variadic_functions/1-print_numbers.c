#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - function that prints numbers, followed by a new line
* @separator: const char
* @n: const unsigned int
* Return: s
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list ptr;
va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(ptr, int));
	if (i != (n - 1))
	printf("%s", separator);
	}
	printf("\n");
}
