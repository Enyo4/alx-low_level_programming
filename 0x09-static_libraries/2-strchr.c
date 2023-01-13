#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: The string to be searches
 * @c: The character to be located
 * Return: A pointer to the fitst occurence if c found
 * Null if not found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index ++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
