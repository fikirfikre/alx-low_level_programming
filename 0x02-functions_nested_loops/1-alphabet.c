/**
 * file_name: 1-alphabet
 * alx - task1
 * by : Fikir Fikre
 */
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase,
 * followed by a new line
 *
 * Return: 0
 */
void print_alphabet(void)
{
  char c;

  for (c='a'; c <= 'z'; c++)
    _putchar(c);

  _putchar('\n');
}
