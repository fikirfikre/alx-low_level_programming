#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
  int c;

  for (c = 0; c <= 9; c++)
    {
      putchar(c + '0');
      if (c != 9)
	{
	  putchar(',');
	  putchar(' ');
	}
     
    }
  putchar('\n');
  return (0);
}
