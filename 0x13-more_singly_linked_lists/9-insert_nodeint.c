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
	listint_t *new, *current;

	if (head == NULL)
		return (NULL);
       /* Special case for inserting at the beginning */
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	/* Traverse the list until the node before the insertion point */
	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	current = current->next;
	/* Check if the index is out of bounds */
	if (current == NULL)
		return (NULL);

	/* Insert the new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = current->next;
	current->next = new;
	return (new);
}
