#include <stdio.h>

/**
 * main - Print lowercase alphabet in reverse
 *
 * Return: 0 on success
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
