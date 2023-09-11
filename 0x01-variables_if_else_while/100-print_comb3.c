#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * The two digits must be different
 * 01 and 10 are considered the same combination
 * of the two digits 0 and 1
 * Return: 0 on success
 */

int main(void)
{
	int f, s;

	for (f = '0'; f < '9'; f++)
	{
		for (s = f + 1; s <= '9'; s++)
		{
			putchar(f);
			putchar(s);
			if (f == '8' && s == '9')
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
