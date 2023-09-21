#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head:  head
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *my_node;

	while (head)
	{
		my_node = head;
		head = head->next;
		free(my_node->str);
		free(my_node);
	}
}
