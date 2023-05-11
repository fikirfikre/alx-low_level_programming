#include "main.h"
/**
 * _puts_recursion - print a string followed by a new line.
 * @s: a string variable
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s);
	if (*s == '\0')
		_putchar('\n');
	s++;
}
