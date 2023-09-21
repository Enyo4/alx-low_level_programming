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
	int i, j = n / 2;
	int temp;

	for (i = 0; i < j / 2; i++)
	{
		temp = a[i];
		a[i] = a[j - i];
		a[j - i] = temp;
	}
}
