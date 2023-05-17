#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return ap pointer to a newly allocated
 * space in memory.
 * @str: a string variable
 *
 * Return: apointer to new allocated space
 */
char *_strdup(char *str)
{
	char *p;
	int size;
	int i;

	if (str == NULL)
		return (NULL);
	size = _strlen(str) + 1;
	p = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		if (p == NULL)
			return (NULL);
		p[i] = str[i];
	return (p);
}

/**
 * _strlen - return the length of a string
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
