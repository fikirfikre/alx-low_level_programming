#include "main.h"
/**
 * _sqrt_recursion - return the natural squre root of an number
 * _sqrt - it check number if square root or not
 * @n: an integer variable
 *
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 *_sqrt - it check number if square root or not
 * Return: square root of number
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (_sqrt(x, y + 1));
}
