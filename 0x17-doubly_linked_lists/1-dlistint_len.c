#include <stdlib.h>
#include "lists.h"
/**
  * dlistint_len - Count the elements in a dlistint_t
  * @h: The double linked list
  * Return: Number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		++len;
		h = h->next;
	}

	return (len);
}
