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
	if (d->name == NULL)
		printf("Name: (nll)\n");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
		printf("Owner: (nll)\n");
	else
		printf("Owner: %s", d->owner);
}
