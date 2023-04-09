#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the product of two in puts from sdandart input
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success) else 1 (Error)
 */
int main(int argc, char **argv)
{
	if (argc <= 2 || argc > 3)
	{		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
