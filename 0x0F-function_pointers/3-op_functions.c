#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - returns the sum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference of two numbers
 * @a: first num
 * @b: second num
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two nums
 * @a: first num
 * @b: second num
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the division of two nums
 * @a: first num
 * @b: secomd num
 *
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the modulos result between two nums
 * @a: first num
 * @b: second num
 *
 * Return: remainder of a division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
