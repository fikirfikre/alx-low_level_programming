#include "main.h"
#include <stdlib.h>
/**
 * create_array - it creates an array of chars
 * @size: size of an array
 * @c: a char varaible
 *
 * Return: fail Null successs pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc((size) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	s[i] = '\0';
	return (s);
}
