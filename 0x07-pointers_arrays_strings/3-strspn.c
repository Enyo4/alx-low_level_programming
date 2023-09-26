#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: the Initial segment
 * @accept: string to compare
 *
 * Return: the number of bytes in the initial segment of s which
 * consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bytes = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				bytes++;
				break;
			}
		}
		if (accept[i] == '\0')
		{
		break;
		}
	}
	return (bytes);
}
