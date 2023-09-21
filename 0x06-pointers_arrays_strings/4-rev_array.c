#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: an array of integers
 * @n: The number of elements of the array
 *
 * Return: the new array
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int temp;

	for (i = 0, j = n - 1; i < n && j >= 0; i++, j++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
