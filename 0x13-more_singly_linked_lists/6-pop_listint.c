#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head:pointer to the first node
 * Return:  the head node’s data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	tmp = *head;
	if (head == NULL)
		return (0);
	data = tmp->n;
	*head = tmp->next;
	tmp->next = NULL;
	return (data);

}
