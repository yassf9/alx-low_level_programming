#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers from min to max, inclusive
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: If min > max, return NULL. If malloc fails, return NULL. Otherwise,
 *         return a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
int *arr, i;

if (min > max)
return (NULL);
arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);
for (i = 0; i <= max - min; i++)
arr[i] = min + i;
return (arr);
}

