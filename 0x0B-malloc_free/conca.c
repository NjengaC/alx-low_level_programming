#include "main.h"
#include <stdlib.h>

int stelen(char *l)
{
	int a = 0;

while (!l[a] == '\0')
{
	a++;
}
return (a);
}

char conca(char *v1, char *v2, char *wen)
{
	int x = 0;
	int y = 0;

	while (!v1[x] == '\0')
	{
		wen[x] = v1[x];
		x++;
	}
	while (!v2[y] == '\0')
	{
		wen[x] = v2[y];
		x++; y++;
	}
	wen[x] = '\0';
	return (wen);
}

char *str_concat(char *s1, char *s2)
{
	char *new;
	/*int i = 0;
	int j = 0;*/
	int c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	c = 1 + (stelen(s1) + stelen(s2));

	new = malloc(sizeof(char) * c);

		if (new == NULL)
			return (NULL);
	conca(s1, s2, new);

	/*while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
	*/
	return (0);
}
