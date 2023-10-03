#include <stdio.h>
#include <stdlib.h>
/**
* main - the main function
* @argc: int
* @argv: string
* Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argc;
	if (argc <= 3)
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	else
		printf("Error");
return (0);
}
