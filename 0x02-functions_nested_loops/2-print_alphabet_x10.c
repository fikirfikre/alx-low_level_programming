#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase,
 * followed by a new line
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
char c;
int i;

c = 'a';
i = 10;

while (i >= 1)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
i--;
_putchar('\n');
}

}
