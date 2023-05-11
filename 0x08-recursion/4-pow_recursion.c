#include "main.h"
/**
 * _pow_recursion - return the value of x rased to the power of y
 * @x: an integer value
 * @y: power
 *
 * Return: an value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y < 0)
		return (-1);
	return (1);
}
