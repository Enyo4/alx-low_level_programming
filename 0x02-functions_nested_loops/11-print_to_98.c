#include "main.h"
#include "stdio.h"

/**
  *print_to_98 - print ints from n to 98
  *@n: start
  */

void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		for (num = n; num <= 98; num++)
		{
			if (num < 98)
				printf("%d, ", num);
			else
				printf("%d\n", num);
		}
	}
	else
		for (num = n; num >= 98; num--)
		{
			if (num > 98)
				printf("%d, ", num);
			else
				printf("%d\n", num);
		}
}
