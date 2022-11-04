#include "main.h"

/**
 * _pow_recursion - return x raised to the value of y
 * @x: number to be raised
 * @y: power to raise x
 * Return: result - x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}

