#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - it frees a list_t list.
 * @head: pointer to the head of the list
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
