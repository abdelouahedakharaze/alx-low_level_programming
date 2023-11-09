#include <stdlib.h>
#include "lists.h"
/**
  * get_dnodeint_at_index - Gets a node from a dlistint_t
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
