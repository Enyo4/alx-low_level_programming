#include "main.h"

/**
 * print_triangle - Prints a triangle of a given length
 * @size: The size of the triangle
 *
 * Return: triangle
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < size; a++)
	{
		for (b = size - a; b > 1; b--)
		{
			_putchar(' ');
		}
		
		for (c = 0; c <= a; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
