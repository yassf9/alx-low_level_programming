#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to const listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int elm = 0;
	const listint_t *p = h;

	if(h == NULL)
		return (0);
	while (p != NULL)
	{
		elm++;
		printf("%d\n", p->n);
		p = p->next;
	}
	return (elm);
}
