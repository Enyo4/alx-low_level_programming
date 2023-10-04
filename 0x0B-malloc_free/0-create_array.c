#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 *		  initializes it with a specific char.
 * @size: The size of memory to allocate
 * @c: the character to be allocated
 *
 * Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		str = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}
	return (str);

}
