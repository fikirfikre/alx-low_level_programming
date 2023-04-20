#include <stdio.h>
/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of a int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu bytes(s)\n", sizeof(float));

return (0);
}