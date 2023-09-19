#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers,
 * followed by a new line
 * @a: array name
 * @n: Number of elements of the array to be printed
 *
 * Return: numbers seperated by a comma, followeed by a space
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
