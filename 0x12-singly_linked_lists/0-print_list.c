#include "lists.h"

/**
 * print_list - prints all elements of the linked list.
 * @h: head of the list
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int sum = 0;
	const list_t *my_node = h;

	if (!h)
		return (0);

	while (my_node)
	{
		sum++;
		my_node->str ?
		printf("[%u] %s\n", my_node->len, my_node->str) :
		printf("[0] (nil)\n");
		my_node = my_node->next;
	}
	return (sum);
}
