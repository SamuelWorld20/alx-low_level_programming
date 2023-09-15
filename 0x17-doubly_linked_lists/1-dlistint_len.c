#include "lists.h"

/**
 * dlistint_len - it returns the number of elements in a linked
 * dlistint_t list.
 * @h: the pointer to the head of the list
 *
 * Return: number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
