#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: a pointer to the reallocated memory or NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *nptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	nptr = (char *)malloc(new_size);
	if (nptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *)ptr)[i];
	}
	free(ptr);

	return (nptr);
}
