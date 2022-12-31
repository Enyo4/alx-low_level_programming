#include <stdio.h>

/**
 * main- prints letters except q and e
 * Return: returns 0 on success
 */

int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		if (let == 'q' || let == 'e')
		{
		}
		else
		{
			putchar(let);
		}
	}
	putchar('\n');

	return (0);
}
