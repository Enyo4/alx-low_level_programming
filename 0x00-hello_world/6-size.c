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
printf("Size of char: %zu bytes\n", sizeof(e));
printf("Size of int: %zu bytes\n", sizeof(a));
printf("Size of long int: %zu bytes\n", sizeof(b));
printf("Size of long long int: %zu bytes\n", sizeof(c));
printf("Size of float: %zu bytes\n", sizeof(d));
return (0);
}
