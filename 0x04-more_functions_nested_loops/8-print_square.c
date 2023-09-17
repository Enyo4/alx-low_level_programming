#include "main.h"

/**
 * print_square - print size of square
 * @size: size of the square
 *
 * Return: shapes
 */
void print_square(int size)
{
	int b, l;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	for (l = 0; l < size; l++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
