#include "main.h"

/**
 * swap_int - Swaps the value of two integerd
 * @a: first integer
 * @b: Second integer
 *
 * Return: new values
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
