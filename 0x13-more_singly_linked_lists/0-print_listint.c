#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to const listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int elm = 0;
	const listint_t *p = h;

	while (p != NULL)
	{
		elm++;
		p = p->next;
	}
	return (elm);
}
