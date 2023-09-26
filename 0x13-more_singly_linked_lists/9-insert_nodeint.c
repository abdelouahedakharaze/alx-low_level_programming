#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head:  head of the list
 * @idx: index  where the new node should be added
 * @n: data to be added
 * Return: address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *marhali;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	marhali = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (marhali == NULL)
		{
			free(new_node);
			return (NULL);
		}
		marhali = marhali->next;
	}

	new_node->next = marhali->next;
	marhali->next = new_node;

	return (new_node);
}
