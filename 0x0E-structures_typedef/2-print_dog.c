#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * void print_dog - function that prints a struct dog
 * @d: pointer to struct dog
 * Return: nil or nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: nil");
	if (d->age <= 0)
		printf("Age: nil");
	if (d->owner == NULL)
		printf("Owner: nil");
}
