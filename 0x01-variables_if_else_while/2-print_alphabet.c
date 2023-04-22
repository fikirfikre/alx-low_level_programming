#include <stdio.h>
/**
 * main - it is a program that will display the alphabet in lowercase,
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
  char c;

  c = 'a';
  for ( ; c <= 'z'; c++)
    putchar(c);
  putchar('\n');
  return (0);
}

