#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: an integer
 */
void print_to_98(int n)
{
  int i;
  int d;
  if ( n <= 98)
    {
      for (i = n; i <= 98; i++)
	{
	  if (i < 10 && i >= 0)
	    {
	      _putchar(i +'0');
	    }
	  
	  else if (i < 0)
		    {
		      _putchar('-');
		      if (i <= -10)
			{
			  _putchar((-1*i)/10 + '0');
			  _putchar((-1*i)%10 + '0');
			}
		      else
			_putchar((-1*i) + '0');
		    }
	  else{
	    _putchar(i/10 + '0');
	    _putchar(i%10 + '0');
	  }
	  if ( i != 98)
	    {
	      _putchar(',');
	      _putchar(' ');
	    }
	  
	}
    }
  else
    {
      for (i = n; i >= 98; i--)
	{
	  d = i / 10;
	  if ( d >= 10)
	    {
	      
	      _putchar((d / 10) + '0');
	      _putchar((d % 10) + '0');
	    }
	  else	    
	    _putchar((i / 10) + '0');

	  _putchar((i % 10) + '0');     
          if ( i != 98)
            {
              _putchar(',');
              _putchar(' ');
            }
	}
    }
  _putchar('\n');
}
