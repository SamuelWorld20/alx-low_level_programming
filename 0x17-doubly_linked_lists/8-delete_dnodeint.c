#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a
 * dlistint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted (starting from 0).
 *
 * Return: 1 if the node was successfully deleted, -1 if the deletion failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		dlistint_t *temp = *head;
		*head = (*head)->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}

		free(temp);
		return (1);
	}
	else
	{
		dlistint_t *current = *head;
		unsigned int count = 0;

		while (current != NULL && count < index)
		{
			current = current->next;
			count++;
		}

		if (current == NULL)
		{
			return (-1);
		}

		current->prev->next = current->next;
		if (current->next != NULL)
		{
			current->next->prev = current->prev;
		}

		free(current);
		return (1);
	}
}
