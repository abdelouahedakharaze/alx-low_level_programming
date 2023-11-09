#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_dnodeint_at_index - Inserts a new node in position
  * @h: The head
  * @idx: where to insert
  * @n: content
  * Return: address, or NULL
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nowNode = NULL, *newNode = NULL;
	unsigned int counter = 0, len = 0;

	if (h == NULL)
		return (NULL);

	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));

	len = dlistint_len(*h);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (len == idx)
		return (add_dnodeint_end(h, n));

	nowNode = *h;
	while (nowNode != NULL)
	{
		if (counter == idx)
		{
			newNode = create_node(n, nowNode, nowNode->prev);
			nowNode->prev = newNode;
			nowNode = newNode;
			nowNode->prev->next = newNode;
			return (newNode);
		}

		nowNode = nowNode->next;
		++counter;
	}

	return (nowNode);
}

/**
  * dlistint_len - Counts the number of elements
  * @h: The double linked list to count
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

/**
  * create_node - Create a new node
  * @n: The number of the new node
  * @next: The next node
  * @prev: The previous node
  * Return: The address of the new node
  */
dlistint_t *create_node(unsigned int n, void *next, void *prev)
{
	dlistint_t *newNode = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = next;
	newNode->prev = prev;
	return (newNode);
}
