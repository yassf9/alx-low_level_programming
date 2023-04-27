#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * add_node_end.c -  adds a new node at the end of a list_t list.
 * @head: pointer to a pointer to list_t
 * @str: string
 * Return: the address of the new element,NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *previous;
	int i;

	new = malloc(sizeof(struct list_s));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = 0;
	for (i = 0; str[i] != '\0'; i++)
		(new->len)++;
	new->next = NULL;
	while (*head != NULL)
	{
		previous = *head;
		*head = (*head)->next;
	}
	previous->next = new;
	return (*head);
}
