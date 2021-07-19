#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - this the structure tag that contains the elements
 * @name: is the variable that holds the name of the object
 * @age: is the variable that holds the value of the age of the object
 * @owner: is the variable that holds the name of the owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* DOG_H_ */
