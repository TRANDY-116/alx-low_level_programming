#include "lists.h"

/**
 * sum_dlistint - Function that adds all the data of a dlistint list
 * @head: header
 * Return: 0 if it exist
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
