#include <stdio.h>
/**
 * main - print all argument it receives.
 * @argc: length of argument
 * @argv: an array of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}		
