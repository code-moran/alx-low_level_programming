#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head;
    const listint_t *fast = head;
    size_t node_count = 0;
    int loop_detected = 0;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        node_count++;

        slow = slow->next;
        fast = fast->next->next;

        /* Check for loop */
        if (slow == fast)
        {
            loop_detected = 1;
            break;
        }
    }

    if (loop_detected)
    {
        slow = head;
        while (slow != fast)
        {
            printf("[%p] %d\n", (void *)slow, slow->n);
            node_count++;
            slow = slow->next;
            fast = fast->next;
        }

        printf("[%p] %d\n", (void *)slow, slow->n);
        node_count++;
        printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
        printf("-> [%p] %d\n", (void *)fast->next->next, fast->next->next->n);
    }

    return (node_count);
}

