#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination
 * @src: the source of the string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k, l, m, a;

	while (*src != '\0')
	{
		i++;
		src++;
	}
	while (*dest != '\0')
	{
		j++;
		dest++;
	}
	k = i - 1;
	l = j - 1;
	m = k + l;
	for (l = j - 1, a = 0; l < m && a < k; l++, a++)
	{
		dest[l] = src[a];
	}
	dest[l] = '\0';
	return (dest);
}
