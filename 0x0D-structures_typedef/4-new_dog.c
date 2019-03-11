#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog memory space
 *
 *@name: name of dog
 *@age: age of dog
 *@owner: owner name of dog
 *
 * Return: Pointer to new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *the_dog_ptr;
	char *copy_name, *copy_owner;

	the_dog_ptr = malloc(sizeof(dog_t));
	if (the_dog_ptr == NULL)
	{
		return (NULL);
	}
	copy_name = malloc(sizeof(name));
	if (copy_name == NULL)
	{
		free(the_dog_ptr);
		return (NULL);
	}
	copy_owner = malloc(sizeof(owner));
	if (copy_owner == NULL)
	{
		free(the_dog_ptr);
		free(copy_name);
		return (NULL);
	}

	for (i=0; name[i] != '\0'; i++)
	{
		copy_name[i] = name[i];
	}
	for (i=0; owner[i] != '\0'; i++)
        {
                copy_owner[i] = owner[i];
	}

	the_dog_ptr->name = name;
	the_dog_ptr->owner = owner;
	the_dog_ptr->age = age;
	return (the_dog_ptr);
}
