#include "main.h"

/**
  *_islower - checks if a letter is lowercase
  *@c: is int
  *Return: returns 0 if true and 1 if false
  */
int _islower(int c)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
		{
			return (1);
		}
	}
	return (0);
}
