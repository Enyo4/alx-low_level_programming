#include "main.h"

/**
  *print_alphabet - prints the alphabet, in lowercase, followed by a new line.
  *Return: a-z
  */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

/**
  *print_alphabet_x10 - prints the alphabets 10times with a new line
  *Return: a-z*10
  */

void print_alphabet_x10(void)
{
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
}
