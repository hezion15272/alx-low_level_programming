#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - is a function that initialize a variable of type struct dog
 * @d: is the structure tag
 * @name: holds the name of the object
 * @age: holds the age of object
 * @owner: holds the name of the owner
 *
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
