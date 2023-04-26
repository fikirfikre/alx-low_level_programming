#include <stdio.h>
/**
 * main - print the sum of all the multiples of 3 or 5 below 1024
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
  int i;
  int sum;
  
  for (i = 0; i < 1024; i++)
    {
      if ( i % 3 == 0 || i % 5 == 0)
	{
	  sum += i;
	}
    }
  printf("%d",sum);
  putchar('\n');
  return (0);
}
