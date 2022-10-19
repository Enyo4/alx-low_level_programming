#include "main.h"


/**
  *print_last_digit - prints the alphabet, in lowercase
  *@n: int
  *Return: the asbsolute val of the int
  */

int print_last_digit(int n)
{
	int l_d = n % 10;

	if (l_d < 0)
		l_d *= -1;
	_putchar(l_d + '0');
	return (l_d);
}
