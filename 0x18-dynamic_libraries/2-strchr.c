#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The given string
 * @c: The character to locate
 *
 * Return: Pointer to the first occurrence of C or NULL if not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
	{

	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return ('\0');
	}
}
