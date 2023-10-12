#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer
 * @array: An array of integers
 * @size: the array size
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: The index of the first element for which
 *		the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (0);
	}

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
				break;
			}
		}
	}
	return (-1);
}
