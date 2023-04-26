#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: an integer
 * Return:0
 */

void print_times_table(int n)
{
  int i;
  int j;
  int mul;
  int d;
  if (n < 15 && n > 0 )
    {
      for (i = 0; i < n+1; i++)
	{
	  
	  for (j=0; j < n+1; j++)
	    {
	      mul = i*j;
	      d = mul / 10;
	      if (mul >= 10)
		{
		  if (d >= 10)
		    {
		      _putchar((d/10) + '0');
		      _putchar((d%10) + '0');
		    }
		  else
		    _putchar((mul/10) + '0');
                  _putchar((mul%10) + '0');
		}
	      else
		{
		  if (j != 0)
		    {
		      _putchar(' ');
		     
		    }
		  _putchar(mul + '0');
		}
	      
	      if (j != n)
                {
                  _putchar(',');
                  _putchar(' ');
		  if (d < 9)
		    _putchar(' ');
		  
                }

	    }
	  _putchar('\n');
	}
    }
}
