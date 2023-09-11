#include <stdio.h>

/**
 * main - print from 0 -9 using putchar function
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
