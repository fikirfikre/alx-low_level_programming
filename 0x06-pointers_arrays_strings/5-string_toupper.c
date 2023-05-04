#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to 
 * uppercase
 * @str: a string variable
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	char *start;

	start = str;	
	while (*start != '\0')
	{
		if (*start >= 'a' && *start <='z')
			*start = *start - 32;
	 	start++;
	}
	return str;
}
