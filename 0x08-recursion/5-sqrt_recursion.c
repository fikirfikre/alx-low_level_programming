#include "main.h"
/**
 * _sqrt_recursion - return the natural squre root of an number
 * @n: an integer variable
 *
 * Retrun: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return _sqrt(n,1);
}
int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return(_sqrt(x, y + 1));
}
