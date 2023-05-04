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
	int len1, len2, result;
	char *p1;
	char *p2;

	len1 = 0;
	len2 = 0;
	p1 = s1;
	p2 = s2;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (len1 > len2)
		result = 15;
	else if (len2 > len1)
		result = -15;
	else
	{
		while (*p1 != '\0')
		{
			if (*p1++ > *p2++)
				result = 15;
			else if (*p1++ < *p2++)
				result = 15;
		}
		if ((*p1 == '\0') && (*p1 == *p2))
			result = 0;
	}
	return (result);
}
