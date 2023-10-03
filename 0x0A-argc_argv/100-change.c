#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: The number of arguments
 * @argv: Array of arguments passed
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, amount, num_coins, coin_count;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = sizeof(coins) / sizeof(coins[0]);
	coin_count = 0;

	for (i = 0; i < num_coins; i++)
	{
		while (amount >= coins[i])
		{
			amount -= coins[i];
			coin_count++;
		}
	}

	printf("%d\n", coin_count);
	return (0);
}
