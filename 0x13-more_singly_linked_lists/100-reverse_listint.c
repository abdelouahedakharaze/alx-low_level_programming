#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: the head of the list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	before = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = next;
	}
	*head = before;

	return (*head);
}
