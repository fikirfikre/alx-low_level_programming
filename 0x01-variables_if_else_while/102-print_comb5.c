#include <stdio.h>
/**
 * main - prints all possible combinations of two tow-digit numbers
 *
 * Return: 0
 */
int main(void)
{
  int i;
  int j;
  int k;
  int m;

  
  

  for (i = 0; i <= 9; i++)
    {
      
      for ( m = 0; m <= 9; m++)
       {
	
	 for (j=0; j <= 9; j++)
	   {
	
	     for (k=1; k <= 9; k++) 

	       {
		 if ( i<= j && m<k)
		   {
		     putchar(i + '0');
		     putchar(m + '0');
		     putchar(' ');
		     putchar(j + '0');
		     putchar(k + '0');
		   
	    
		     if(i != 9 || m != 8)
		       {
			 putchar(',');
			 putchar(' ');
		       }
		   }
	       }
	   }
	}      
    }
  putchar('\n');
  return (0);
}

	    
	  
