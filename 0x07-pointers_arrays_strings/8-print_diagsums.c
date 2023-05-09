#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square martrix of integers.
 * @a: array of numbers.
 * @size: size of the array
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, l, k, sum2;

	sum1 = 0;
	sum2 = 0;
	l = 0;
	k = size - 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 = sum1 + a[l];
			if (j == k)
				sum2 = sum2 + a[l];
			l++;
		}
		k--;
	}
	printf("%i, %i", sum1, sum2);
	printf("\n");
}
