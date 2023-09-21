#include "lists.h"
/**
 * add_node_end - adds a new node
 * at the end of a list_t list
 * @head:  head
 * @str: str of new node
 * Return: the address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *jedida, *haliya;

	jedida = malloc(sizeof(list_t));
	haliya = *head;
	if (!jedida || !head)
		return (NULL);

	if (str)
	{
		jedida->str = strdup(str);
		jedida->len = strlen(str);
	}
	if (haliya)
	{
		while (haliya->next)
			haliya = haliya->next;
		haliya->next = jedida;
	}
	else
		*head = jedida;

	return (jedida);
}
