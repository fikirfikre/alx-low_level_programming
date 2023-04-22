#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - display the last digit of a random number
 * Description: compared the last digit of the number to five and if greater the print
 * the last digit is greater than five , 
 * compare the last digit to zero and if the value is equal to 0 print it is zero
 * compare the last digit with 6 and not zero then print the value is less than 6 and not 0
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	  {
	    printf("Last digit of %d is %d and is greater than 5\n", n, last);
	  }
	else if (last == 0)
	  {
	    printf("Last digit of %d is %d and is 0\n", n, last);
	  }
	else if ( last < 6 && last != 0)
				  {
				    printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
				  }
	return (0);
}
