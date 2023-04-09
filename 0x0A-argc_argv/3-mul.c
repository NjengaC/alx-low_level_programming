#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the product of two in puts from sdandart input
 * @i: first argument
 * @j: second argument
 * @res: result of product
 *
 * Return: 0 (Success) else 1 (Error)
 */
int main(int argc, char *argv[])
{
int i, j, res;

if (argc <= 2 || argc > 3)
{
	printf("Error\n");
	return (1);
}
else
i = atoi(argv[1]);
j = atoi(argv[2]);
res = i * j;
printf("%d\n", res);
return (0);
}
