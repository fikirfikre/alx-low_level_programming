#include "main.h"
#include <stdlib.h>
/**
 * str_concat - return pointer should point to a newly
 * allocated space in memory which contains s1.
 * @s1: first string input
 * @s2: sencod string input
 *
 * Return: apointer
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	p = malloc(((len1 + len2) + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	_strncat(p, s1, len1);
	_strncat(p, s2, len2);
	p += '\0';
	return (p);
}

/**
 * _strlen - return length of string
 * @s: a string variable
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strncat - conactenate strings
 * @dest: a string variable
 * @src: a strin variable
 * @n: size of byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = _strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	return (dest);
}
