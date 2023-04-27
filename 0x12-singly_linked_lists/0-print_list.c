#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list_t
 * Return: he number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned long int cmp = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			 printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		cmp++;
	}
	return (cmp);
}
