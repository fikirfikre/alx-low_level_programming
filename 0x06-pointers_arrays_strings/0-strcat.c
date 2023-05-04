#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings.
 * @dest: a string variable
 * @src: a string variable
 *
 * Return: char dest
 */
char *_strcat(char *dest, char *src)
{
	char *start;

	start = dest;
	while (*start != '\0')
		start++;
        while (*src != '\0')
        	*start++ = *src++;
        return (dest);
}		
