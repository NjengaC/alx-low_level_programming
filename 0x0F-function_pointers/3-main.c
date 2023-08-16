#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * main - computes the results of the operand provided
 * @argc: number of arguments
 * @argv: argument variables
 *
 * Return: results
 */
int main(int argc, char **argv)
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
