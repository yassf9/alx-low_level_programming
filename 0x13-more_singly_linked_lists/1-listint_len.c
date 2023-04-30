#include "lists.h"
/**
 * listint_len - number of elements in a linked listint_t list.
 * @h: pointer to a const listint_t
 * Return: the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	unsigned long int elm = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		elm++;
		h = h->next;
	}
	return (elm);
}
