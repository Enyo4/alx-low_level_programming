#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: digit to be computed
 *
 * Return: 1 if c is a digit or 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
