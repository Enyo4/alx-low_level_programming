#include <stdio.h>

/**
 * main - print all possible three digit combination
 * Return: 0 on success
 */
int main(void)
{
	int f, s, t;

	for (f = 0; f < 8; f++)
	{
		for (s = f + 1; s < 9; s++)
		{
			for  (t = s + 1; t < 10; t++)
			{
				putchar((f % 10) + '0');
				putchar((s % 10) + '0');
				putchar((t % 10) + '0');
				if (f == 7 && s == 8 && t == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
