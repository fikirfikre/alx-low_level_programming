#include "main.h"
/**
 * jack_bauer - print every minutes of the day of jack Bauer, starting from
 * 00:00 to 23:59
 * Return: 0
 */
void jack_bauer(void)
{
  int h;
  int m;

  h = 0;

  
  while (h < 24)
    {
      m = 0;
      while (m < 60)
	{
	  _putchar((h / 10) + '0');
	  _putchar((h % 10) + '0');
	  _putchar(':');
	  _putchar((m / 10) + '0');
	  _putchar((m % 10) + '0');
	  _putchar('\n');
	  m++;
	}
      
      h++;
    }
}
