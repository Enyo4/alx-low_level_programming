#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0 on success
 */
int main(void)
{
	long int f, n = 612852475143;

	for (f = 2; f < n; f++)
	{
		if (n % f == 0)
		{
			n = n / f;
		}
		else
		{
			continue;
		}

	}
	printf("%lu", f);
	printf("\n");
	return (0);
}
