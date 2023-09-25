#include "main.h"

/**
  *print_diagsums - prints the sum of diagonals in a square matrix
  *@a : the array
  *@size : the size of the array
  */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0, p = 0;

	for (i = 0; i < size; i++)
	{	p = (i * size) + i;
		sum1 += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		sum2 += *(a + p);
	}

	printf("%i, %i\n", sum1, sum2);
}
