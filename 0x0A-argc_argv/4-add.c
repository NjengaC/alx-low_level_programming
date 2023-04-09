#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

printf("%d\n", (argc > 1) ? sum : 0);
return (0);
}
