#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates a mwmory using malloc.
 * @b: Number of bytes to allocate
 *
 * Return: A pointer to the allocated memory, or terminate with value 98
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
