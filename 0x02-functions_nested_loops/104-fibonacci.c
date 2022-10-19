#include <stdio.h>

void fibonacci(unsigned long a, unsigned long b, int count);

/**
  *main - fibbonacci sequence
  *Return: returns 0 on success
  */

int main(void)
{
	fibonacci(1, 1, 98);
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
		int temp = a;

		a = b;
		b = temp + b;
		if (count > 1)
			printf("%lu, ", a);
		else
			printf("%lu", a);
		count--;
		fibonacci(a, b, count);
	}
	else
		putchar('\n');
}
