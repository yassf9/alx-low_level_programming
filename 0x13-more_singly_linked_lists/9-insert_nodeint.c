#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head : pointer to first node
 * @idx:  index of the list where the new node should be added
 * @n: integer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{

		new = malloc(sizeof(struct listint_s));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx && *head; i++)
	{
		*head = (*head)->next;
	}
	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(struct listint_s));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (*head)->next;
	(*head)->next = new;
	return (new);
}
