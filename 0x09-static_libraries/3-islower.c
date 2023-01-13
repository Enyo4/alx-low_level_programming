#include "main.h"

/**
 * _islower - Function checks if input is lower case
 * @c: the inpit integer value
 * Return: 1 of true, 0 of false
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
