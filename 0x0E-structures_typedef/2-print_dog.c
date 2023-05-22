#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that print a struct dog
 * @d: pointer to sturct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return ;
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s", d->owner);
}
			
