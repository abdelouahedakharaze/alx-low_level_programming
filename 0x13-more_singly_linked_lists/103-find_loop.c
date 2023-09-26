#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: the head of the list
 * Return: the address of the node or null
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle = head, *rabbit = head;

	while (rabbit != NULL)
	{
		turtle = turtle->next;
		rabbit = rabbit->next->next;
		if (turtle == rabbit)
		{
			turtle = head;
			while (turtle != rabbit)
			{
				turtle = turtle->next;
				rabbit = rabbit->next;
			}
			return (turtle);
		}
	}
	return (NULL);
}
