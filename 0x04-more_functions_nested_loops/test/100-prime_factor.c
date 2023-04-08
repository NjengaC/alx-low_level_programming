#include <stdio.h>
int main()
{
	int i;
	int k;
	long int j = 612852475143;
	for(i = 0; i < j; i++)
	{
	k = (j % i);
	if (k == 0)
	printf("%d\n", i);
	}
return (i);
}
