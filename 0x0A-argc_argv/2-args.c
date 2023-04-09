#include "main.h"
#include <stdio.h>
/**
 * main - prints the arguments paased the program including itself
 * @argc: argemnet count
 * @argv: argument vector
 *
 * Return: 0 Always (Success)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
