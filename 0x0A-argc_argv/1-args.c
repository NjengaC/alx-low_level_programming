#include "main.h"
#include <stdio.h>
/**
 * main - prints the numberof arguments passed
 * @argc: argement count
 * @argv: argement vector
 *
 * Return: 0 always (Success)
 */

int main(int argc, char **argv)
{
(void) argv;
	printf("%d\n", argc - 1);
	return 0;
}
