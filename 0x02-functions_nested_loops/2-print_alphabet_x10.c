#include <stdio.h>

/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet,
 * in lowercase
 *
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int n;
	int a;

	for (n = 0; n <= 10; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
	{
			putchar(a);
		}
		putchar('\n');
	}
}
