#include "lists.h"

/**
 * helper_func - calculates the tool of a loop in a linked list
 * @head: the head of the linked list
 * Return: the number of nodes in the loop
 */
size_t helper_func(const listint_t *head)
{
	const listint_t *turtle, *rabbit;
	size_t tool = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	turtle = head->next;
	rabbit = head->next->next;
	while (rabbit != NULL)
	{
		if (turtle == rabbit)
		{
			turtle = head;
			while (turtle != rabbit)
			{
				tool++;
				turtle = turtle->next;
				rabbit = rabbit->next;
			}

			turtle = turtle->next;
			while (turtle != rabbit)
			{
				tool++;
				turtle = turtle->next;
			}

			return (tool);
		}

		turtle = turtle->next;
		rabbit = rabbit->next->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the head of the list
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t tool, i;

	tool = helper_func(*h);

	if (tool == 0)
	{
		for (i = 0; *h != NULL; i++)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
		}
	}
	else
	{
		for (i = 0; i < tool; i++)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
		}
		*h = NULL;
	}

	h = NULL;

	return (i);
}
