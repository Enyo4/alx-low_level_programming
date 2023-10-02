#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it
 * @argc: The number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
