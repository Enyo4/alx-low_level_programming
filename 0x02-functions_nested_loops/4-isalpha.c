#include "main.h"

/**
 * _isalpha -A function that checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if c is a letter lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
