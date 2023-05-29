#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node of dlistint list
 * @head: Head of the list
 * @index: of the node
 * Return:NULL if the node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; head != NULL && a < index; a++)
	{
		head = head->next;
	}
	return (head);
}
