#include <stdio.h>
/**
* fizz_buzz -  prints the numbers from 1 to 100
*/
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		printf("Fizz");
		else if (i % 5 == 0 && i % 3 != 0)
		printf("Buzz");
		else if (i % 5 == 0 && i % 3 == 0)
		printf("FizzBuzz");
		else
		printf("%d", i);
		if (i != 100)
		printf(" ");
		else
		printf("\n");
	}
}
/**
* main -the main function
* Return: the return value is 0
*/
int main(void)
{
	fizz_buzz();
	return (0);
}
