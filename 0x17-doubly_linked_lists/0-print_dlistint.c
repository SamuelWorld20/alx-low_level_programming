#include "lists.h"

/**
 * print_dlistint - it prints all the elements of a dlistint_t list.
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}

	return (count);
}
