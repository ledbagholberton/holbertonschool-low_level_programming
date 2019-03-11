#include "dog.h"
#include <stdlib.h>

/**
 * struct init_dog - check the code for Holberton School students.
 *
 *@dog: Dog structure  
 *@name: name of dog
 *@age: age of dog 
 *@owner: owner of dog
 * Return: Nothing 
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
