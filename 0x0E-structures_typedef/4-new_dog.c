#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -  function that creates a new dog
 * @name: pointer to string name
 * @age: age number
 * @owner: pointer to a string owner
 * Return: struct dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1 = 0, len2 = 0, i;

	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(len1 * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	dog->owner = malloc(len2 * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
