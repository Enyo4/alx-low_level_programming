#include <stdio.h>

void fibonacci(unsigned long a, unsigned long b, int count);

/**
  *main - fibbonacci sequence
  *Return: returns 0 on success
  */

int main(void)
{
	fibonacci(1, 1, 50);
	return (0);
}

/**
  *fibonacci - fibonnaci seq
  *@a: where it initial number
  *@b: where it preceeding number
  *@count: number of sequence
  */
void fibonacci(unsigned long a, unsigned long b, int count)
{
	if (count > 0)
	{
		unsigned long temp = a;

		a = b;
		b = temp + b;
		if (count > 1)
			printf("%ld, ", a);
		else
			printf("%ld", a);
		count--;
		fibonacci(a, b, count);
	}
	else
		putchar('\n');
}
