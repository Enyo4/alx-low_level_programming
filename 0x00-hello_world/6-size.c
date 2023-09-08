#include <stdio.h>

/**
 * main- print out sizes
 *
 * Return: 0
 */
int main(void)
{
int a;
long int b;
long long int c;
float d;
char e;
printf("Size of a char: %zu byte(s)\n", sizeof(e));
printf("Size of an int: %zu byte(s)\n", sizeof(a));
printf("Size of a long int: %zu byte(s)\n", sizeof(b));
printf("Size of a long long int: %zu byte(s)\n", sizeof(c));
printf("Size of a float: %zu byte(s)\n", sizeof(d));
return (0);
}
