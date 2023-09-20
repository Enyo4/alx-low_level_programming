#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: An integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;

	for (; *s; s++)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = (result * 10) + (*s - '0');
		}
		else if (result != 0)
		{
			break;
		}
	}
	return (result * sign);
}
