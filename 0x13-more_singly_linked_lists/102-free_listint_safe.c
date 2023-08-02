#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int difft;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difft = *h - (*h)->next;
		if (difft > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

