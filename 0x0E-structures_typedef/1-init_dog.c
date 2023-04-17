#include "dog.h"
/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d:input pointer to struct dog
 * @name:input pointer to a string
 * @age:input age
 * @owner:input pointer to a string
 * Return:nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
