#include "main.h"

/**
 * factorial - factorial of numbers
 * @n: input number
 * Return: -1 if less than 0 and return 1 if num os 0 and 1
 */
int factorial(int n)
{
int x;

if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
x = n * factorial(n - 1);
}
return (x);

}
