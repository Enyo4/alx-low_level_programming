#include "main.h"

/**
 * rev_string - Prints a string in reverse.
 * @s: Given string
 *
 * Return: 0;
 */
void rev_string(char *s)
{
	int i, start, end, length = 0;
	char temp;

	/* Calculate the length of the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	start = 0;
	end = length - 1;
	/* Swap characters from the beginning and end of the string */
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
