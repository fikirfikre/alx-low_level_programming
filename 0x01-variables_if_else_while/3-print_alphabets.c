#include <stdio.h>
/**
 * main - it prints the alphabet in lowercase and then in uppercase,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
  char c;
  char C;

  for (c = 'a'; c <= 'z'; c++)
    putchar(c);

  for (C = 'A'; C <= 'Z'; C++)
    putchar(C);

  putchar('\n');
  return (0);
}
