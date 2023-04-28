#include <stdio.h>
/**
 * main - prints the numbers fro 1 to 100, followed by
 * a new line,But for multiples of three pirnt Fizz and
 * for the multiples of five print Buzz, For numbers wh
 * are muliple of both thre and five print FizzBuzz.
 */
 
int main(void)
{
	int i;
	
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		 	printf("%s ","FizzBuzz");
		 else if( i % 3 == 0)
		 	printf("%s ","Fizz");
		 else if(i % 5 == 0)
		 	printf("%s ","Buzz");
		 else
		 	printf("%d ",i);
		
	}
	return (0);
}
