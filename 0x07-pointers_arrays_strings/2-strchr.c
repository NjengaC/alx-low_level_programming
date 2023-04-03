#include "main.h"
/**
 * _strchr - function checks occurence of a character
 * @s: name of string containing character
 * @c: character to locate
 *
 * Return: always 0 (Success)
 */

char *_strchr(char *s, char c)

{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
