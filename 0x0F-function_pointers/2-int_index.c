#include <stddef.h>
#include <stdbool.h>
#include "function_pointers.h"
/**
 * int_index - earches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 * Return: index(Success) ,-1 (fail)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool r;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r == true)
				return (i);
		}
	}
	return (-1);
}
