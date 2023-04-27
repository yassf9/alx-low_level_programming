#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: pointer to list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *l;

	while (head != NULL)
	{
		l = head;
		head = head->next;
		free(l->str);
		free(l);
	}

}
