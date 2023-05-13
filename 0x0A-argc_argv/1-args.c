#include <stdio.h>
/**
 * main - print the number of argument passed into it
 * @argc: number of argument in argv
 * @argv: an array of argument
 *
 * Return: 0 if it Success
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 1)
		printf("0\n");
	else
	{
		while(*argv++)
			i++;
		printf("%d\n", i - 1);
	}
	return (0);
}
