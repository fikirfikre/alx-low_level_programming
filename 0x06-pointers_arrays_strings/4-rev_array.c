#include "main.h"
/**
 * reverse_array - reverse the content
 * of an array of integers.
 * @a: an array
 * @n: number of elements of the array
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, temp;
	int len;

	len = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[len];
		a[len--] = temp;
	}
}
