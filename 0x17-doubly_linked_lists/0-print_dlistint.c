#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - Function that prints all elements of a dlistint_t list
 * @h: the header of the list
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (num);

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
