#include "lists.h"
#include <stddef.h>
/**
 * list_len - the number of elements in a linked list_t list
 * @h: a pointer to the list
 * Return: unsigned long int
 */
size_t list_len(const list_t *h)
{
	unsigned long int cmp = 0;

	while (h != NULL)
	{
		cmp++;
		h = h->next;
	}
	return (cmp);
}

