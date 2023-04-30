#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head : pointer to a pointer to listint_t
 * @n: constant integer
 * Return: the address of the new element,NULL (fail)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p;

	new = malloc(sizeof(struct listint_s));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	p = *head;
	if (p == NULL)
		*head = new;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
	return (new);
}
