#ifndef _DOG_
#define _DOG_

/**
 * struct dog - Here the struct for DOG
 *
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Name of owner
 *Return: Size of Struct 6 bytes
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
