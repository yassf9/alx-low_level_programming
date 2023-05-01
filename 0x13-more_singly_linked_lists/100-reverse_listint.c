#include "lists.h"
/**
 * reverse_listint - Reverses a linked list in-place.
 *
 * @head: A pointer to a pointer to the first node in the list.
 *
 * Return: A pointer to the new first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
