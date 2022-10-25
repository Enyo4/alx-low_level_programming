#include "main.h"
#include <stdio.h>

/**
  *print_array -  a function that prints n elements of an array of integers,
  *followed by a new line.
  *@a: an int
  *@n: an int
  *Return: returns 0 on success
  */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
		printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	putchar('\n');
}
