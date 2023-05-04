#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @str: a sting variable
 *
 * Return: an encoded string
 */
char *leet(char *str)
{
	char *p;
	int i;

	char a1[10] = "aAeEoOtTlL";
	char a2[10] = "4433007711";
	p = str;
	while (*p != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*p == a1[i])
				*p = a2[i];
		}
		p++;
	}
	return (str);
}
