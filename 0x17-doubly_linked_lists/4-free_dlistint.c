#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * free_dlistint - Frees a dlistint_t
  * @head: The head
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
