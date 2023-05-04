#include "main.h"
/**
 * cap_string - it capitalizes all words of a string.
 * @str: a string variable
 *
 * Return: capitalized string.
 */
char *cap_string(char *str)
{
	char *p1;
	char *p2, *start;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i;

	p1 = str + 2;
	p2 = str + 1;
	start = str;
        if (*start >= 'a' && *start <= 'z')
        	*start= *start - 32;
        while (*p2 != '\0')
        {
        	for ( i = 0; i < 13; i++)
        		if (a[i] == *p2)
        		{
        			if (*p1 >= 'a' && *p1 <= 'z')
        				*p1 = *p1 - 32;
        		}
        	p1++;
        	p2++;
	}
        return (str);
}
