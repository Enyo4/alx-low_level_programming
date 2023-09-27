#include "main.h"
#include <stdio.h>

/**
  *print_diagsums - prints the sum of diagonals in a square matrix
  *@a : the array
  *@size : the size of the array
  *
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
