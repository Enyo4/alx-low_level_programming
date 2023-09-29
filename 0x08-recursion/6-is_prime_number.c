#include "main.h"

/**
 * is_prime_checker - checks if the integer is prime
 * @n: the number to check
 * @divisor: the number to divide @n by
 *
 * Return: 1 if prime else 0
 */
int is_prime_checker(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (divisor == 1)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_checker(n, divisor - 1));
	}
}

/**
 * is_prime_number - Checks if input integer is prime number
 * @n: Input integer
 *
 * Return: 1 if prime number else 0
 */
int is_prime_number(int n)
{
	return (is_prime_checker(n, n / 2));
}
