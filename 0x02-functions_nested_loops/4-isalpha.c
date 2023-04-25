#include "main.h"
/**
 * _isalpha(int c) - checks for alphabetic charachter
 * c - variable that will be checked
 * Return 1 if the c is letter,lower or uppercase
 * Return: 0 if c is not letter
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >='A' && c <= 'Z'))
{
return (1);
}
else
{   
return (0);
}
}
