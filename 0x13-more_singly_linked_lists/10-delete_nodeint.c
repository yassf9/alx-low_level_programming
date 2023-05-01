#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the node at index of a listint_t
 * @head: pointer to the first node
 * @index:  index of the node that should be deleted
 * Return:  1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{	unsigned int i;
	listint_t *tmp;

	if (head == NULL)
		return (-1);
	tmp = *head;
	for (i = 0; i < index && tmp; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	free(tmp);
	*head = (*head)->next;
	return (1);
}
