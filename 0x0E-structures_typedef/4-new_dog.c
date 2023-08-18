#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int namelen, ownerlen, i;

	ptr = malloc(sizeof(struct dog));
	if (!ptr)
		return (NULL);
	namelen = strlen(name);
	ownerlen = strlen(owner);

	ptr->name = malloc(sizeof(char) * namelen);
	if (!ptr->name)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		*(ptr->name + i) = *(name + i);

	ptr->age = age;

	ptr->owner = malloc(sizeof(char) * ownerlen);
	if (!ptr->owner)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < ownerlen; i++)
		*(ptr->owner + i) = *(owner + i);

	return (ptr);
}
