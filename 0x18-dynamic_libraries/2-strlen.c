#include "main.h"

/**
 * _strlen - return length of a string.
 * @s: Character given
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}
