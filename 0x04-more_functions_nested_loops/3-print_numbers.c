#include "main.h"
/**
 * print_numbers - it prints the numbers, form 0 to 9 
 * followed by a new line
 * 
 */
 
void print_numbers(void)
{
	int a;
	
	for ( a = 0; a < 10; a++)
		_putchar(a + '0');
	_putchar('\n');
}
