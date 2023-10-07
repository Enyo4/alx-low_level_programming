#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an arrays of integers
 * @min: minimum value of the array
 * @max: The maximum number of the array
 *
 * Return: Pointer to the newly created array or NULL if it fails.
 */
int *array_range(int min, int max)
{
	int i, *array, length;

	if (min > max)
	{
		return (NULL);
	}

	length = (max - min) + 1;
	array = malloc(sizeof(int) * length);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
