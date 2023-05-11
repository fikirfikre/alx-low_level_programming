#include "main.h"
/**
 * is_prime_number - it check the number is prime or not
 * @n: an integer variable
 *
 * Return: 1 if input interger is prime other wise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
/**
 * _prime - it check the number is prime or not
 * @x: an integer variable
 * @y: an integer variable
 * Return: 1 if input interger is prime other wise 0
 */
int _prime(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (_prime(x, y + 1));
}

