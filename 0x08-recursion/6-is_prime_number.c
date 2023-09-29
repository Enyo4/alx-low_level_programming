#include "main.h"

/**
 * is_prime_number - Checks if input integer is prime number
 * @n: Input integer
 *
 * Return: 1 if prime number else 0
 */
int is_prime_number(int n)
{
        int i;

  if (n <= 1) {
    return 0;
  }

  for (i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}

