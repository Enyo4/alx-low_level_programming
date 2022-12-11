#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main- finds the last digit of a random number
*Return: return 0 on success
*/
int main(void)
{
int n;
int l_d;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
l_d = n % 10;
if (l_d > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, l_d);
}
else if (l_d == 0)
{
printf("Last digit of %d is %d and is 0\n", n, l_d);
}
else if (l_d != 0 &&  l_d < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_d);
}
return (0);
}
