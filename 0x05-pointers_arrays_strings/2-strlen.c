#include "main.h"

/**
  *_strlen - a function that returns the length of a string..
  *@s: an int
  *Return: returns 0 on success
  */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
