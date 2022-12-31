#include <stdio.h>

/**
 * main- prints all single numbers in base ten
 * Return: returns 0 on success
 */

int main(void)
{
	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');

	return (0);
}
