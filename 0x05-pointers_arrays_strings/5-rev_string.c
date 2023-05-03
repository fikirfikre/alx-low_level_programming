#include "main.h"
#include "stdio.h"
/**
 * rev_string - reverse a string.
 * @s: a string variable.
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int i, j, len;
	char temp;

	i = 0;
	len = 0;
	while (s[i] != '\0')
		i++;
	len = i - 1;
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[len];
		s[len--] = temp;
	}
}
