#include "lists.h"
/**
 * add_node - adds a new node at
 * the beginning of a list_t list.
 * @head: pointer of pointer head
 * @str: content of new node
 * Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *jedida;

	jedida = malloc(sizeof(list_t));
	if (jedida != NULL)
	{
		jedida->next = *head;
		jedida->str = strdup(str);
		jedida->len = strlen(str);
	}
	else
		return (NULL);

	*head = jedida;
	return (jedida);
}
