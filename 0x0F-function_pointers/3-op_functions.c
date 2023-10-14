#include "3-calc.h"
/**
* op_add - returns the sum of a and b
* @a: int
* @b: int
* Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - returns the difference of a and b
* @a: int
* @b: int
* Return: a - b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - returns the product of a and b
* @a: int
* @b: int
* Return: a - b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - returns the division of a and b
* @a: int
* @b: int
* Return: a - b
*/
int op_div(int a, int b)
{
	if (b != 0)
	return (a / b);
	else
	{
		printf("Error\n");
		exit(100);
	}
}
/**
* op_mod - op_mod
* @a: int
* @b: int
* Return: a % b
*/
int op_mod(int a, int b)
{
	if (b != 0)
	return (a % b);
	else
	{
		printf("Error\n");
		exit(100);
	}
}
