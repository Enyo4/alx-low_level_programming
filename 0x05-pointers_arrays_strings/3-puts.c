#include "main.h"

/**
  *_puts - Write a function that swaps the values of two integers.
  *@str: a char
  */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
