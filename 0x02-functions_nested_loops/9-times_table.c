#include "main.h"

/**
  *times_table - prints the multiplication table from 0-9
  */

void times_table(void)
{
	int num1, num2, mult;

	for (num1 = 0; num1 < 10; num1++)
	{
		_putchar('0');
		for (num2 = 1; num2 < 10; num2++)
		{
			mult = num1 * num2;
			_putchar(',');
			_putchar(' ');

			if (mult < 10)
			{
				_putchar(' ');
				_putchar(mult + '0');
			}
			else
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
