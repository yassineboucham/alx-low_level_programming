#include <stdio.h>

/**
* main - the main function
* @argc: int
* @argv: string
* Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argc;
	while (*argv)
	{
		printf("%s\n", *(argv++));
	}
	return (0);
}
