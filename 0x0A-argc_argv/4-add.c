#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints sum o positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Success, 1 Error
 */

int main(int argc, char *argv[])
{
int sum = 0;
int i, j;

for (i = 1; i < argc; i++)
{
char *arg = argv[i];

for (j = 0; arg[j]; j++)
{
if (!isdigit(arg[j]))
{
printf("Error\n");
return (1);
}
}

sum += atoi(arg);
}

printf("%d\n", sum);
return (0);
}
