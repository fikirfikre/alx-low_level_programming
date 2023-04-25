#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: a variable
 *
 * Return: 0
 */

int print_last_digit(int n)
{
int rem;
  
rem = n % 10;
if ( rem < 0)
rem *= -1;
_putchar(rem + '0');
return (rem);
}
