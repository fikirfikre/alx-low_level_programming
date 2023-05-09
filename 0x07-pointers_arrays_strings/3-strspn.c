#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: first variable
 * @accept: second variable
 *
 * Return: numberof bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

	len = 0;
	if ( *s == '\0' || *accept == '\0')
		return (len);
	while(*s && _strchr(accept,*s++))
		len++;
	return (len);
}
