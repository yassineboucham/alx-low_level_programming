#include "main.h"
/**
* f - function that returns 1 if the input integer is a prime number
* @n: number
* @j: number
* Return: int
*/
int f(int n, int j)
{
	if (j >= n * n)
	{
		return (0);
	}
	else if (n % j == 0 && n != j)
	{
		return (0);
	}
	else
	{
		return (1);
	}
		return (f(n, j + 1));
}
/**
* is_prime_number - otherwise return 0
* @n: number
* Return: int
*/
int is_prime_number(int n)
{
	if (n == 0 || n == 1)
	{
	return (0);
	}
	return (f(n, 2));
}
