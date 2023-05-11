#include "main.h"
/**
 * _print_rev_recursion(char *s) - prints a string in reverse
 * @s: a string variable
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
