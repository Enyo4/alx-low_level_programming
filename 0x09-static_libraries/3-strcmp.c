#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: the second string
 *
 * Return: A negative number if s2 > s1, a positive number if s1 > s2
 * and 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
	{
		if (s1[i] != s2[j])
		{
			return (s1[i] - s2[j]);
		}
	}
	return (0);
}
