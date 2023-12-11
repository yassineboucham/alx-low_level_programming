#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: const char
*/
void print_all(const char * const format, ...)
{
	int i;
va_list op;
va_start(op, format);
if (format)
{
while (format[i] != '\0')
{
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(op, int));
		break;
	case 'i':
		printf("%d", va_arg(op, int));
		break;
	case 'f':
		printf("%f", va_arg(op, double));
		break;
	case 's':
		if (va_arg(op, char *) == NULL)
			i++;
			printf("%s", va_arg(op, char *));
		break;
	default:
	    i++;
	continue;
}
	if (format[i + 1] != '\0')
	printf(", ");
	i++;
}
}
printf("\n");
va_end(op);
}
