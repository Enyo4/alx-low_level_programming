#include <stdio.h>

/**
 * main - A function that prints the alphabets in lower case
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a';  a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
