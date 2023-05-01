#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the node at index of a listint_t
 * @head: pointer to the first node
 * @index:  index of the node that should be deleted
 * Return:  1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{	unsigned int i;
	listint_t *tmp, *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	prev = NULL;
	for (i = 0; i < index && tmp; i++)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (i < index || tmp == NULL)
		return (-1);
	if (prev == NULL)
		*head = tmp->next;
	else
		prev->next = tmp->next;
	free(tmp);
	return (1);
}
