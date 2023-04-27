#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer to list_t
 * @str: string
 * Return: the address of the new element, NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(struct list_s));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = 0;
	for (i = 0; str[i] != '\0'; i++)
		(new->len)++;
	new->next = *head;
	*head = new;
	return (*head);
}
