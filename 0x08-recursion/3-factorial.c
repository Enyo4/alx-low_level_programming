#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: Given number
 *
 * Return: -1 if less than 0 and 1 if 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
