#include "main.h"
/**
 * _pow_recursion - returnns the value of x raised to the power of y
 * @x: the Base value
 * @y: the Power value
 *
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x = x * _pow_recursion(x, y - 1));
}
