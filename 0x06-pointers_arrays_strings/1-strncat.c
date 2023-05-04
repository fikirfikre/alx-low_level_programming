#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: a string variable
 * @src: a string variable
 * @n: number of byte from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start;
	int i;

	start = dest;
	while (*start != '\0')
		start++;
	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
			*start++ = *src++;
	}
	start = '\0';
	return (dest);
}
