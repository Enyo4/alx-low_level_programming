#include "main.h"

/**
 * puts2 - Prints every other characters of a string,
 * starting with the first character
 * @str: The given string
 *
 * Return: The new string
 */
void puts2(char *str)
{
	int i, j, length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	j = 0;
	while (j < length)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
