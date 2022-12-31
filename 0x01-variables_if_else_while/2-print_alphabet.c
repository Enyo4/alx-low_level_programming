#include <stdio.h>

/**
 * main - print letters in small letters from a-z
 * Return: returns 0 on success
 */

int main(void)
{
char let;
for (let = 'a'; let <= 'z'; let++)
{
	putchar(let);
}
putchar('\n');

return (0);
}
