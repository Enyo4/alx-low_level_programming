#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The given character
 * @index: number to print
 * Return: The value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value = -1;

	if (index < sizeof(unsigned long int) * 8)
	{
		while (index > 0)
		{
			n >>= 1;
			index--;
		}
		bit_value = n & 1;
	}
	return (bit_value);
}
