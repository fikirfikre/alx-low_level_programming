#include "main.h"
/**
 * rot13 - it encodes a string using rot13.
 * @str: a string variable
 *
 * Return: an encoded string
 */
char *rot13(char *str)
{
	int i;
	char* p;

	char a1[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a2[52] = "NOPQRSTUVWXYZABCDEFGHIGKLMnopqrstuvwxyzabcdefghijklm";
	p = str;
	while (*p != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*p == a1[i])
				*p = a2[i];
		}
		p++;
	}
	return (str);
}
