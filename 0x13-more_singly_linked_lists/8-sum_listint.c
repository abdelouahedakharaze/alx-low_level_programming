#include "lists.h"

/**
 * sum_listint - returns the sum of data
 * @head:  head of the list
 * Return: sum of all the data (n) of a linked list
 */
int sum_listint(listint_t *head)
{
	int jm3;

	for (jm3 = 0; head; head = head->next)
		jm3 += head->n;

	return (jm3);
}
