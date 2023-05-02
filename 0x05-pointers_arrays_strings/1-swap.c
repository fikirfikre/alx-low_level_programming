#include "main.h"
/**
 * void_swap_int - swaps the values of two integers.
 * @a: the first  input value
 * @b: the second input value
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
