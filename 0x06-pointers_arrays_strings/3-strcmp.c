#include "main.h"
/**
 * _strcmp - it compares two strings.
 * @s1: variable the will be compared.
 * @s2: the second variable the will be compared
 *
 * Return: -15,15,0
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 < *s2)
		return (*s1 - *s2);
	if (*s1 > *s2)
		return (*s1 - *s2);
	else
		return (0);
}
