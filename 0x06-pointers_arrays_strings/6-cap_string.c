#include "main.h"

/**
 * cap_string - Capitalizes all words of a string after a space or after
 * Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @str: The input string
 *
 * Return: The formatted string
 */
char *cap_string(char *str)
{
	int i, j;
	char sc[] = {' ', '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; sc[i] != '\0'; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if ((j == 0 || str[j - 1] == sc[i]) && (str[j] >= 97 && str[j] <= 122))
			{
				str[j] -= 32;
			}
		}
	}
	return (str);
}
