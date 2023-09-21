#include "lists.h"

/**
 * list_len - get the size of a linked list
 * @h: head of the list
 * Return: the number of nodes
*/
size_t list_len(const list_t *h)
{
	int sum = 0;
	const list_t *my_node = h;

	if (!h)
		return (0);

	while (my_node)
	{
		sum++;
		my_node = my_node->next;
	}
	return (sum);
}
