#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: The initial string
 * @to: The string to be substituted
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
