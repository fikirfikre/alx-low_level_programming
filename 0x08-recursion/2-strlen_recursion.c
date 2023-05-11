#include "main.h"
/**
 * _strlen_recursion - it return the length of given string.
 * @s: a string variable
 *
 * Return: int length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
