#include "lists.h"
#include <stdio.h>

/**
 * helper_function - calculates the tool of a loop in a linked list
 * @head: the head of the linked list
 * Return: the number of nodes in the loop, or 0 if there is no loop
 */
size_t helper_function(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t tool = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	slow_ptr = head->next;
	fast_ptr = head->next->next;

	while (fast_ptr != NULL)
	{
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				tool++;
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}

			slow_ptr = slow_ptr->next;
			while (slow_ptr != fast_ptr)
			{
				tool++;
				slow_ptr = slow_ptr->next;
			}

			return (tool);
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a linked list safely.
 * @head:  head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t tool, i;

	tool = helper_function(head);

	if (!tool)
	{
		for (; head != NULL; tool++, head = head->next)
			printf("[%p] %d\n", (void *) head, head->n);
	}
	else
	{
		for (i = 0; i < tool; i++, head = head->next)
			printf("[%p] %d\n", (void *) head, head->n);
		printf("-> [%p] %d\n", (void *) head, head->n);
	}

	return (tool);
}
