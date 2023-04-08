#include <stdio.h>
int main()
{
	int i;
	int j;
	int m = 8;
	for (i = 1; i <= m; i++)
	{
		for (j = m; j >= i; j--)
		{
			putchar(' ');
		}
	for (j = 1; j <= i; j ++)
	{
		putchar('#');
		}
		putchar('\n');
	}
	return (0);
}

