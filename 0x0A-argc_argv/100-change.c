#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Success else 1 if no input
 */

int main(int argc, char **argv)
{
	int money;
	int coins[] = { 25, 10, 5, 2, 1 };
	int j = 0;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);

	for (; i < 5; i++)
	{
		while (money >= coins[i])
		{
			money -= coins[i];
			j++;
		}
	}
	printf("%d\n", j);
	return (0);
}
