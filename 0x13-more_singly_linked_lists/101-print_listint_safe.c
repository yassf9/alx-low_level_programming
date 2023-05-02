#include "lists.h"
/**
 * print_listint_safe - prints a linked list of integers
 * @head: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 0;

	tortoise = head;
	hare = head;

	if (head == NULL)
		exit(98);
	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
		/* check if hare has caught up to tortoise */
		if (hare == tortoise)
		{
			tortoise = head;
			while ( tortoise != hare)
			{
				/* print the value of the node where the loop starts */
				printf("[%p] %d\n", (void *)tortoise, tortoise->n);
				tortoise = tortoise->next;
				hare = hare->next;
				count++;
			}
			 printf("->[%p] %d\n", (void *)tortoise, tortoise->n);
			 exit(98);
		}
	}
	return (count);
}
