#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * str: the input string
 *
 * Return: Uppercase letters
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
