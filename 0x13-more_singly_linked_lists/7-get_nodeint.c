#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node in linked list
 * @head: head of the list
 * @index: index of the node
 * Return: the nth node of a listint_t linked list, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	for (counter = 0; counter < index && head; counter++)
		head = head->next;

	return (head);
}
