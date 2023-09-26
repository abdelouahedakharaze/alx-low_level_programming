#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at given index
 * @head: the head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *marhali, *marhali2;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		marhali = *head;
		*head = (*head)->next;
		free(marhali);
		return (1);
	}

	marhali = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (marhali == NULL)
			return (-1);
		marhali = marhali->next;
	}

	marhali2 = marhali->next;
	marhali->next = marhali2->next;
	free(marhali2);

	return (1);
}
