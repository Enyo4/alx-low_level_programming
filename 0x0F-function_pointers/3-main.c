#include "3-calc.h"

/**
 * main - performs simple operations.
 * @argc: Number of arguments
 * @argv: Array of integers
 *
 * Return: results
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*oprt)(int, int);
	char sign;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = *argv[2];

	oprt = get_op_func(sign);

	if (oprt = NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(num1, num2));
	return (0);
}
