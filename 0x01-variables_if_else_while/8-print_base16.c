#include <stdio.h>
/**
* main - the main function
* Return: returnung 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i <= 9)
		{
			putchar('0' + i);
		}
		else
		{
			putchar('a' + (i - 10));
		}

	}
	putchar('\n');
	return (0);
}
