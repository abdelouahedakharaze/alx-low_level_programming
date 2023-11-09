#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Prints a whole double linked list
 * @h: The double linked
 * Return: The number of nodes of the double linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++len;
		h = h->next;
	}

	return (len);
}
