#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Print all the elements of the dlistint_t list.
 * @h: Is the head of the dlistint_t list.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
