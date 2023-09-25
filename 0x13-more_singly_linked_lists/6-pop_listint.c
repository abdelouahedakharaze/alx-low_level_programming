#include "lists.h"

/**
 * pop_listint - deletes the head node,
 * @head: head of the list
 * Return: the head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *passer;
	int n;

	if (*head == NULL)
		return (0);
	passer = *head;
	n = passer->n;
	*head = (*head)->next;
	free(passer);
	return (n);
}
