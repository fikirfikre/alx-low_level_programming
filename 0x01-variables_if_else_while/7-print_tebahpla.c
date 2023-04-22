#include <stdio.h>
/**
 * main - prints the lower case alphabet in reverse,
 * followed by an new line
 *
 * Return: 0
 */
int main(void)
{
  char c;

  for (c = 'z'; c >= 'a'; c--)
    putchar(c);
  putchar('\n');
  return (0);
}
