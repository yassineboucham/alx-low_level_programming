#include "main.h"
/**
* f - f function
* @n: int
* @j: int
* Return: int
*/
int f(int n, int j)
{
if (j * j > n)
{
	return (-1);
}
else if (j * j == n)
{
	return (j);
}
	return (f(n, j + 1));
}
/**
* _sqrt_recursion -  function that returns the natural square root of a number
* @n: int
* Return: int f
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (f(n, 0));
}
