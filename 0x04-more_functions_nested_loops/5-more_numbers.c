#include "main.h"
/**
 * more_numbers - print 10 times the numbers from 0 ot 14,
 * followed by a new line
 */
void more_numbers(void)
{
	 int i;
	 int j;

	 
	 i = 0;
	 
	 while(i < 10)
	 {
	 	for(j = 0; j < 15; j++)
	 	{
	 		if (j > 9)
	 			_putchar(j/10 + '0');
	 		_putchar(j%10 + '0');	
		}
		if( i != 9)
			_putchar('\n');
	 	i++;
	 }
}
