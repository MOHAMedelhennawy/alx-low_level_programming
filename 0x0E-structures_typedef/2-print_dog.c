#include <stdio.h>
#include "dog.h"
/**
 * print_dog - to print element of struct
 * @d: the struct
 * Return: info
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (!d->age)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);

		if (!d->owner)
			printf("Owner: (nil)\n");
		else
			printf("Oge: %s\n", d->owner);
	}
}
