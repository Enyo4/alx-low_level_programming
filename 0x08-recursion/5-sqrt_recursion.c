#include "main.h"

/**
 * _sqrt_recursive - checks for the square root of a number
 * @n: the number to check
 * @i: a random integer squared to n
 *
 * Return: natural square root of a number
 */
int _sqrt_recursive(int n, int i)
{
	if ((i * i) == n)
	{
		return (i);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursive(n, i + 1));
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The given integer
 *
 * Return: -1 if n does not have a natural root and square root of n on success
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursive(n, 1));
}
