#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: is the number we are checking
 * @x:
 * Return: natural square root if there otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, (n - 1)));
}



/**
 * real_sqrt_recursion - function that recurses to get the sqrt
 * @n: the number we are looking sqrt for
 * @x: the iterator value
 *
 * Return: natural sqrt
 */
int real_sqrt_recursion(int n, int x)
{

	if ((x * x) < n)
		return (-1);
	if ((x * x) == n)
		return (x);
	return (real_sqrt_recursion(n, (x - 1)));
}
