#include "main.h"

/**
 * _sqrt_recursion - FUnction that retrn ssquare root of a number
 * @n: The number to use
 * Return: Square roots
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - The square root of natural numbers
 * @n: number to use
 * @a: number to fo through
 * Return: The square root of natural numbers
 */

int _sqrt(int n, int a)
{
	int sqr = a * a;

	if (sqr > n)
		return (-1);
	if (sqr == n)
		return (a);
	return (_sqrt(n, a + 1));
}
