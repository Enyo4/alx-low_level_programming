#include "main.h"

/**
 * jack_bauer - Prints evert minute of the day
 * starting from 00:00 t0 23:59
 *
 * Return: 0 0n success
 */
void jack_bauer(void)
{
	int f, s, t, l;

	for (f = 0; f < 3; f++)
	{
		for (s = 0; s <= 9; s++)
		{
			for (t = 0; t <= 5; t++)
			{
				for (l = 0; l <= 9; l++)
				{
					if ((f <= 2) && (s < 4))
					{
						_putchar(f + '0');
						_putchar(s + '0');
						_putchar(58);
						_putchar(t + '0');
						_putchar(l + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
