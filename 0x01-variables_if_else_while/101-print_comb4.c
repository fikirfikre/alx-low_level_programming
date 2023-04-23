#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits.
 * 
 * Return: 0
 */
int main(void)
{
  int i;
  int j;
  int k;

  for (i=0; i <= 7; i++)
    {
    for (j=1; j <=8; j++)
      {
	for (k=2; k <=9; k++)
	  {
	    if ( i < j && i < k && j < k)
	      {
		putchar(i + '0');
		putchar(j + '0');
		putchar(k + '0');

		if ( i != 7)
		  {
		    putchar(',');
		    putchar(' ');
		  }
	      }
	  }
      }
    }
  putchar('\n');
  return (0);
}
		 
