#include <stdio.h>
/**
* main - the main function
* Return: returnung 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
