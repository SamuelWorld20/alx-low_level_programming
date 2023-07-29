#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list - it prints all the elements of a list_t list.
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", (unsigned long)strlen(h->str), h->str);
		}
		h = h->next;
		count++;
	}
	printf("-> %lu element%s\n", (unsigned long)count, count == 1 ? "" : "s");

	return (count);
}
