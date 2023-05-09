#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: a string variable
 * @needle: a string variable
 *
 * Return: a pointer to the begining of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;

	start = haystack;
	if (*haystack == '\0')
		return (haystack);
	if (*needle == '\0')
		return (needle);
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			while (*haystack && *needle)
			{
				if (*haystack != *needle)
					return ('\0');
				haystack++;
				needle++;
			}
			if (*needle == '\0')
				return (start);
		}
		haystack++;
		start++;
	}
	return ('\0');
}
