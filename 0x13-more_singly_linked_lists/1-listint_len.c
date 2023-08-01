#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - it returns the number of elements in a linked listint_t list
 * @h: the pointer to the head of the list
 *
 * Return: number of elements in a linked list_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
