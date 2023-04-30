#include "lists.h"
/**
 * get_nodeint_at_index - get the nth node
 * @head: pointer to listint_t list
 * @index: the index of the node
 * Return: the nth node,(if it does not exis)NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
