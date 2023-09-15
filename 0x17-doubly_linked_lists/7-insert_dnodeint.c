#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * in a dlistint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be inserted (starting from 0).
 * @n: The data to be added to the new node.
 *
 * Return: A pointer to the newly inserted node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;

		if (*head != NULL)
		{
			(*head)->prev = new_node;
		}

		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *current = *head;
		unsigned int count = 0;

		while (current != NULL && count < idx - 1)
		{
			current = current->next;
			count++;
		}

		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}

		new_node->next = current->next;

		if (current->next != NULL)
		{
			current->next->prev = new_node;
		}

		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}
