#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Number of tines the number of \ should be printed
 *
 * Return: diagonals
 */
void print_diagonal(int n)
{
	int a, s;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < n; a++)
	{
		for (s = 0; s < a; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
