#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * add_dnodeint - Adds a new node at start
  * @head: The head of dlistint_t
  * @n: content
  * Return: The new head
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*head)
	{
		newNode->next = *head;
		newNode->prev = (*head)->prev;
		(*head)->prev = newNode;
		*head = newNode;
		return (*head);
	}

	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
	return (*head);
}
