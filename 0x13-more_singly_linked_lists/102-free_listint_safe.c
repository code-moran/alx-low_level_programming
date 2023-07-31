#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the head pointer of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *temp;
	size_t node_count = 0;

	while (current != NULL)
	{
		node_count++;

		if (current->next >= current)
		{
			temp = current;
			current = current->next;
			temp->next = NULL;
			break;
		}

		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;
	return (node_count);
}

