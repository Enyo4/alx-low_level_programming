#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	printf("Name: %s\n", d->name);

	if (d->age < 0)
	{
		printf("Age: nil");
	}
	else
	{
		printf("Age: %.6f\n", d->age);
	}

	if (d->owner == NULL)
	{
		d->owner ="(nil)";
	}
	printf("Owner: %s\n", d->owner);
}
