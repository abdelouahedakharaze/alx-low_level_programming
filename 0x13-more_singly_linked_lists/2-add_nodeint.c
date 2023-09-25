#include "lists.h"

/**
 * add_nodeint - adds a new_node node at the beginning of a list
 * @head: the head of the list
 * @n: integer of new_node node
 * Return: address of the new_node element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
