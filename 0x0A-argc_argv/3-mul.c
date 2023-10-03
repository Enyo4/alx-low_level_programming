#include <stdio.h>
#include "main.h"

/**
 * main - Multiplies two numbers
 * @argc: The number of arguments
 * @argv: An array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = _atoi(argv[1]);
        	num2 = _atoi(argv[2]);
	        result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
