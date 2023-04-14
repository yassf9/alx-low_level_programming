#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
if (new_size < old_size)
{
old_size = new_size;
}

memcpy(new_ptr, ptr, old_size);
free(ptr);
return (new_ptr);
}
