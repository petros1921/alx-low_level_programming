#include "lists.h"

/**
 * sum_dlisint - sums all the data of a dlistint_list.
 * @head: The head of the dlistint_t list.
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum)
}
