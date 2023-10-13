#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: char
 * @n: int
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *str;

	va_list ptr;
va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char (*));
		if (str == NULL)
		printf("(nil)");
		else
		printf("%s", str);
		if (separator != NULL && i != (n - 1))
		printf("%s", separator);
	}
	printf("\n");
}
