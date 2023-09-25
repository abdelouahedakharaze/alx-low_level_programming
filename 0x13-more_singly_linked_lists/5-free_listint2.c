#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *mimhat_two;

	if (head == NULL)
		return;
	while (*head)
	{
		mimhat_two = *head;
		*head = (*head)->next;
		free(mimhat_two);
	}
	*head = NULL;
}
