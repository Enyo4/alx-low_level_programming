#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: given number,
 * @y: the power @x is raised to.
 *
 * Return: -1 if y is lower than 0 or the result of the function
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		x *= _pow_recursion(x, y);
	}
	return (x);
}
