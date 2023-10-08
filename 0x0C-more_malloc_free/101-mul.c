#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string is a digit
 * @c: Given string to check
 *
 * Return: 1 on success and 0 if non-digit found
 */
int is_digit(char c)
 
/**
 * main - multiply two positive integers
 * @argc: The number of arguments passed to the command line
 * @argv: array of arguments
 *
 * Return: reault on success or print "Error" with exit status "98" if failed.
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
