#include "main.h"
/**
 * puts2 - prints every even character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: a string
 * Return: 0
 */
void puts2(char *str)
{
	int i, len;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	while (i < len)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
