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
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}

