#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: Given string
 *
 * Return: 0;
 */
void print_rev(char *s)
{
	int n = 0;
	char *p = s;

	for (; *s != '\0'; s++)
	{
		n++;
	}

	for (n = n - 1; n >= 0; n--)
	{
		_putchar(p[n]);
	}

	_putchar('\n');
}
