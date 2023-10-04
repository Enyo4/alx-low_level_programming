#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *	     which contains a copy of the string given as a parameter.
 * @str: The given string to duplicate
 *
 * Return: A pointer to the duplicated string or
 *		NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *cpy;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{

	}
/* Allocate memory for the duplicated string (+1 for null-terminator) */
	cpy = malloc(sizeof(char) * (i + 1));

	if (cpy == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		cpy[j] = str[j];
		j++;
	}

	return (cpy);
}
