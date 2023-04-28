#include "main.h"
/**
* _isupper - it is checks for uppercase character
* @c - a variable
* Return: 1 if it is sucess else 0
*/
int _isupper(int c)
{
	if ( c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
