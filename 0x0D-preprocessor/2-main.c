#include <stdio.h>
/**
 * main - Print the name of the file the program was compiled from
 *
 * Return: Success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
