#include <stdio.h>
int main(int s)
{
	s = 10;
	int i;
	int j;
	for (i = 0; i < s; i++)
{
	for (j = 0; j < s; j++)
	putchar('#');
	putchar('\n');
}
return (0);
}
