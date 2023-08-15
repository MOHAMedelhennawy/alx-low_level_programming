#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int n1, n2, i;
	struct dog_t *new;

	if (name != NULL && owner != NULL)
	{
		n1 = strlen(name);
		n2 = strlen(owner);

		new = malloc(sizeof(dog_t));
		if (new == NULL)
			return (NULL);

		new->name = malloc(n1 * sizeof(char));
		if (new->name == NULL)
		{
			free(new);
			return (NULL);
		}

		new->owner = malloc(n2 * sizeof(char));
		if (new->owner == NULL)
		{
			free(new->name);
			free(new);
			return (NULL);
		}

		for (i = 0; i < n1; i++)
			*(new->name + i) = *(name + i);
		for (i = 0; i < n2; i++)
			*(new->owner + i) = *(owner + i);
		return (new);
	}
}
