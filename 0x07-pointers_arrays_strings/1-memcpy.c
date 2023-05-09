#include "main.h"
/**
 * *_memcpy - it copies memory area
 * @dest: a memory area that will be n bytes of src copied to it.
 * @src: a memory area
 * @n: number of byte that will be copied.
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
