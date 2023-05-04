#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: a string variable.
 * @src: a string variable.
 * @n: number of bytes.
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start;
	int i;

	start = dest;
	for (i = 0; i < n; i++)
	{
		if(*src != '\0')
			*start++ = *src++;
		else
			break;
	}
	for (; i < n - 1; i++)
		*start = '\0';
	return (dest);
}
