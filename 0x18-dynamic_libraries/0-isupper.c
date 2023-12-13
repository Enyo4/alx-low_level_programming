#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: character to be computed
 *
 * Return: 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
