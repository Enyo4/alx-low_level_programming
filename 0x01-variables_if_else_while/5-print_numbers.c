#include <stdio.h>

/**
 * main- prints all single numbers in base ten
 * Return: returns 0 on success
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
