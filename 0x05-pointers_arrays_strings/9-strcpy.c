#include "main.h"
/**
 * _strcpy - it copies the string pointed to by src, includeint the
 * terminating null byte, to the buffer ointed to by dest.
 * @src: pointer to string
 * @dest: pointer tostring
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
