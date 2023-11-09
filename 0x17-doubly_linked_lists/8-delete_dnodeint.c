#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * delete_dnodeint_at_index - delete a node
  * @head: head
  * @index: where to delete
  * Return: 1 or -1
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nowNode = NULL, *temp = NULL;
	unsigned int len = 0;

	if (head && *head)
	{
		len = dlistint_len(*head);
		if (index > len)
			return (-1);

		if (index == 0)
			return (delete_first_dnode(head));

		nowNode = get_dnodeint_at_index(*head, index);
		if (nowNode)
		{
			temp = nowNode;
			if (len - 1 == index)
				nowNode->prev->next = nowNode->next;
			else
			{
				nowNode->prev->next = nowNode->next;
				nowNode->next->prev = nowNode->prev;
			}

			free(temp);
			return (1);
		}
	}

	return (-1);
}

/**
  * delete_first_dnode - delete first node
  * @head: The head
  * Return: 1
  */
int delete_first_dnode(dlistint_t **head)
{
	dlistint_t *nowNode = *head, *temp = NULL;

	temp = nowNode;
	if (nowNode->next)
	{
		nowNode = nowNode->next;
		nowNode->prev = temp->prev;
		*head = nowNode;
	}
	else
	{
		*head = NULL;
	}

	free(temp);
	return (1);
}

/**
  * get_dnodeint_at_index - Gets a node from dlistint_t
  * @head: The head
  * @index: The index to find
  * Return: The specific node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nowNode = head;
	unsigned int counter = 0;

	if (head)
	{
		while (nowNode != NULL)
		{
			if (counter == index)
				return (nowNode);

			nowNode = nowNode->next;
			++counter;
		}
	}

	return (NULL);
}

/**
  * dlistint_len - Counts the number of elements
  * @h: dlistint_t
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
