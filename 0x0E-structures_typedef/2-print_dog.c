#include "dog.h"
#include <stdio.h>

/**
 * print_dog - it prints a struct dog
 * @d: a pointer to struct dog
 *
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
