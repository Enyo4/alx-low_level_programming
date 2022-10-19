#include "main.h"

int _abs(int a);

/**
  *_abs - prints the alphabet, in lowercase, followed by a new line.
  *@a: int
  *Return: the asbsolute val of the int
  */
int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-a);
}
