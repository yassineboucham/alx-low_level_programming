#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - the main function
* @argc: int
* @argv: string
* Return: 0
*/

int main(int argc, char *argv[])
{
	int nb1 = 0, i;

	(void)argc;
	argv++;
	while (*argv)
	{
		i = 0;
		while ((*argv)[i])
		{
			if (!isdigit((*argv)[i]))
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		nb1 += atoi(*argv);
		argv++;
	}
	printf("%d\n", nb1);
	return (0);
}
