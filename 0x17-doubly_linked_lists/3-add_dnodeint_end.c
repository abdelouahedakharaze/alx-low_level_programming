#include <stdlib.h>
#include "lists.h"
/**
  * add_dnodeint_end - Adds a new node at the end
  * @head: The head of dlistint_t
  * @n: content
  * Return: The new head
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nowNode = NULL, *newNode = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*head)
	{
		nowNode = *head;
		while (nowNode->next != NULL)
			nowNode = nowNode->next;

		newNode->next = NULL;
		newNode->prev = nowNode;
		nowNode->next = newNode;
		return (newNode);
	}

	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
	return (*head);
}
