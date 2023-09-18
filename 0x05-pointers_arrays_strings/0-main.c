#include <stdio.h>
/**
 * reset_to_98 - function that updates the value it points to 98.
 * @n: the variable changing
*/
void reset_to_98(int *n)
{
	*n = 89;
}

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
