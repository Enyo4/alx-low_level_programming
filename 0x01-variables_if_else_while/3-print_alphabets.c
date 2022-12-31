#include <stdio.h>

/**
*main- print letters from a-z in small letters then in small letters
*Return: return 0 on success
*/

int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
	putchar(let);
	}

	for (let = 'A'; let <= 'Z'; let++)
	{
		putchar(let);
	}
	putchar('\n');

	return (0);
}
