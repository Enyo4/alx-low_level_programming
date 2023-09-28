#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Pointer to the given string
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
