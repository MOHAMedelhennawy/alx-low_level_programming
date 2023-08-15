#include <stdio.h>
#include "dog.h"
/**
 * print_dog - to print element of struct
 * @d: the struct
 * Return: info
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %d\n", d->name);

	if (!d->age)
		printf("Age: (nil)\n");
	else
		printf("Age: %d\n", d->age);

	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Oge: %d\n", d->Owner);
}
