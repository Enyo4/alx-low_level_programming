#include "main.h"

/**
 * _strlen - Gets the length of a string
 * @s: the given string
 *
 * Return: the length of string s
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_recursive - Checks if number is recursive
 * @s: The input string
 * @start: The initial index no
 * @end: The last index
 *
 * Return: 1 if palindrome else 0
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] == s[end])
	{
		return (is_palindrome_recursive(s, start + 1, end - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - checks if number is palindrome
 * @s: Given string
 *
 * Return: 1 if palindrome else 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen(s) - 1;

	return (is_palindrome_recursive(s, 0, len));
}
