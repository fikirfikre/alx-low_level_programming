#include "main.h"
#include <stdio.h>
/**
 * _strchr - it locates a character in a string
 * @s: a string variable
 * @c: a character in sring
 *
 * Return: if c found it return c else, Null
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);
	if (c == '\0')
		return(s);
	while (*s)
	{
		if ( *s == c)
			return (s);
		s++;
	}
	return ('\0');
}
