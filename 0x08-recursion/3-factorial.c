#include "main.h"
/**
 * factorial - return teh factorial of a given number
 * @n: a given number
 *
 * Return: an int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
