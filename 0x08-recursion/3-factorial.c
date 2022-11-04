#include "main.h"

/**
 * factorial - factorial of numbers
 * @n: input number
 * Return: -1 if less than 0 and return 1 if num os 0 and 1
 */
int factorial(int n)
{
int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	else
		result *= factorial (n-1);
return (result);
}
