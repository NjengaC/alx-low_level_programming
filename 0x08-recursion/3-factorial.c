#include "main.h"
/**
 * factorial - returnns the factorial of a given number
 * @n: the NUmber
 *
 * Return: Factorial!
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	else
		n = n * factorial(n - 1);

return (n);
}
