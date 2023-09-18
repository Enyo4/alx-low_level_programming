#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: number of times the character _ should be printed
 *
 * Return: 0
 */
void print_line(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		if (a == 0 || a < 0)
		{
			continue;
		}
		_putchar(95);
	}
	_putchar('\n');
}
