#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: int
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	unsigned int i;

	va_list s;
va_start(s, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(s, int);
	}
return (sum);
}
