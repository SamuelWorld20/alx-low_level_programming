#include "dog.h"

/**
 * init_dog - it initialize a variable of type struct dog
 * @d: pointer to stuct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
