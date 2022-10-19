#include "main.h"

int _isalpha(int c);

/**
  *_isalpha - checks if a letter is lowercase
  *@c: is an int
  *Return: returns 0 if true and 1 if false
  */

int _isalpha(int c)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
		{
			return (1);
		}
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (c == letter)
		{
			return (1);
		}
	}
	return (0);
}
