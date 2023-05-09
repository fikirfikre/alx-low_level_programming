#include "main.h"
/**
 * *_memset - it fills memory with a constant byte.
 * @s: a memory area.
 * @b: a constant byte.
 * @n: number of byte that will be filled by constant.
 *
 * Return: apointer to the memeory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
