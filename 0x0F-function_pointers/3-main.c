#include "3-calc.h"
/**
 * main - the main function
 * @argc: int
 * @argv: string
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int nb1, nb2;

	int (*op_func)(int, int);
if (argc != 4)
printf("Error\n"), exit(98);
	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (!op_func)
	printf("Error\n"), exit(99);
	if (!nb2 && (argv[2][0] == '%' || argv[2][0] == '/'))
	printf("Error\n"), exit(100);
	printf("%d\n", op_func(nb1, nb2));
	return (0);
}
