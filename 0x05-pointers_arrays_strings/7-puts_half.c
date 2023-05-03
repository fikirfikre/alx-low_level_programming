#include "main.h"
/**
 * puts_half - it prints the second half of the string, followed by a line
 * @str: a string variable
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i,j;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	for (j = i/2; j < i; j++)
		_putchar(str[j]);
}
