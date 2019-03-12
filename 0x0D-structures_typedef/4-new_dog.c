#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - CLone astring in a memory space
 * @str: String to be duplicated
 *
 * Return: Pointer to new string.
 */

char *_strdup(char *str)
{
	char *newstr;
	int cont, cont2;

	if (!str)
		return (NULL);
	for (cont = 0; str[cont] != '\0'; cont++)
	{
	}
	newstr = malloc(cont * sizeof(char) + 1);
	if (newstr == NULL)
		return (NULL);
	for (cont2 = 0; cont2 <= cont; cont2++)
	{
		newstr[cont2] = str[cont2];
	}
	newstr[cont2] = '\0';
	return (newstr);
}

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
	dog_t *the_dog_ptr;
	char *copy_name, *copy_owner;

	the_dog_ptr = malloc(sizeof(dog_t));
	if (the_dog_ptr == NULL)
	{
		return (NULL);
	}
	copy_name = _strdup(name);
	if (copy_name == NULL)
	{
		free(the_dog_ptr);
		return (NULL);
	}
	copy_owner = _strdup(owner);
	if (copy_owner == NULL)
	{
		free(the_dog_ptr);
		free(copy_name);
		return (NULL);
	}
	the_dog_ptr->name = copy_name;
	the_dog_ptr->age = age;
	the_dog_ptr->owner = copy_owner;
	return (the_dog_ptr);
}
