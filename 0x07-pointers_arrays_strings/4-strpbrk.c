#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: a string variable.
 * @accept: a string variable.
 *
 * Return: a pointer to the bytes s that match with accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
