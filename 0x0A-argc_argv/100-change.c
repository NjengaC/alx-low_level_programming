#include <stdio.h>
#include <stdlib.h>
/**
 * coin_count - prints the minimum number of coins to make change
 * @cents: The change to be gotten free
 *
 * Return: The number of changes needed
 */
int coin_count(int cents)
{
	if (cents <= 0)
	{
		return (0);
	}
	else if (cents >= 25)
	{
		return (1 + coin_count(cents - 25));
	}
	else if (cents >= 10)
	{
		return (1 + coin_count(cents - 10));

	}
	else if (cents >= 5)
	{
		return (1 + coin_count(cents - 5));
	}
	else if (cents >= 2)
	{
		return (1 + coin_count(cents - 2));
	}
	else if (cents >= 1)
	{
		return (1 + coin_count(cents - 1));
	}
}
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
	int cent;

	if (argc - 1 != 1)
	{
		printf("Error\n");
	}
	cent = atoi(argv[1]);
	printf("%d\n", coin_count(cent));
	return (0);
}
