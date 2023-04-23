#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: 0
 */

int main(void)
{
  int i;
  int j;

  for (i=0; i <= 8; i++)
    for (j=1; j <= 9; j++)
      {
	if( i < j)
	  {
	  putchar(i + '0');
	  putchar(j + '0');
	  
	if ( i != 8)
	  {
	    putchar(',');
	    putchar(' ');
	  }
	  }
      }
  putchar('\n');
  return 0;
}
