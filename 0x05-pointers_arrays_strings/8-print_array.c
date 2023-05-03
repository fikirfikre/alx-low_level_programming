#include "main.h"
#include <stdio.h>
/**
 * print_array - it's print n elements of an array of integer,followed by a new line
 * @a: an array of integers.
 * @n: number of element
 *
 * Return:0
 */
void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		if (i != n-1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
