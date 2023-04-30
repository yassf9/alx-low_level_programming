#include "lists.h"
/**
 *  free_listint2 - frees a listint_t list
 *  @head : pointer to pointer to listint_t
 *  Return; nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			next = (*head)->next;
			free(*head);
			*head = next;
		}
	}
	*head = NULL;
}
