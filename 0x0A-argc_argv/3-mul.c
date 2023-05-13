#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiples two numbers
 * @argc: length of the argument
 * @argv: array of the argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul, i;

	mul = 1;
	i = 1;
	if (argc <= 2 || argc >= 4)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (i < 3)
		{
			mul = mul * atoi(argv[i]);
			i++;
		}
		printf("%d\n", mul);
	}
	return (0);
}
