#include "main.h"

int print_sign(int n);

/**
  *print_sign - prints the alphabet, in lowercase, followed by a new line.
  *@n: is int
  *Return: a-z
  */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
