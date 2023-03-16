#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array using malloc
 * @nmemb: content of the array
 * @size: size of the array
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	ptr = malloc(j);

	if (ptr == NULL)
		return (NULL);

	while (i < j)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
