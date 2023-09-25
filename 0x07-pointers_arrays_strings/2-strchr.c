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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

