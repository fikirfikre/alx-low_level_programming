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
	int i, j;

	len = 0;
	i = 0;
	if ( *s == '\0' || *accept == '\0')
		return (len);
	while (s[i] != ' ' && s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				len++;
		}
		i++;
	}
	return (len);
}
