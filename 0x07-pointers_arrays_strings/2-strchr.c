#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: the given string
 * @c: The character to locate
 *
 * Return: A pointer to the first occurrence of C or NULL if the character !found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'c')
		{
			return (s);
		}
	}

	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
