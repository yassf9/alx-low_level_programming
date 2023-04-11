#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * @size: size of array
 * @c: character
 * Return: NULL if it fails or size is 0 , a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
