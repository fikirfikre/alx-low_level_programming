#include "main.h"
/**
 * _puts_recursion - print a string followed by a new line.
 * @s: a string variable
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	if (*s == '\0')
	{
		_putchar(' ');
		_putchar('\n');
	}
}
