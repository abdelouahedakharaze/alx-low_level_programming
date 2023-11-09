#include <stdlib.h>
#include "lists.h"
/**
  * sum_dlistint - Sum of all data in dlistint_t
  * @head: The head
  * Return: The sum
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nowNode = head;
	int sum = 0;

	if (head)
	{
		while (nowNode != NULL)
		{
			sum += nowNode->n;
			nowNode = nowNode->next;
		}
	}

	return (sum);
}
