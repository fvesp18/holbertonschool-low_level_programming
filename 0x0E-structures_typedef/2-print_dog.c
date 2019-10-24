#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints struct dog
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d == NULL)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);


}