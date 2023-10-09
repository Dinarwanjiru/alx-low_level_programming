#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize dog struct
 * * @d: pointer to struct type dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age:age of the dog
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).owner = owner;
		(*d).age = age;
	}
}
