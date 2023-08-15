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
		printf("Name: %d\n", b->name);

	if (!d->age)
		printf("Age: (nil)\n");
	else
		printf("Age: %d\n", b->age);

	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Oge: %d\n", b->Owner);
}
