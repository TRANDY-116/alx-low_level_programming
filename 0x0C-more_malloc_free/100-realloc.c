#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Function that reallocates mem block using malloc & free
 * @ptr: pointer to memory previously allocated with malloc
 * @old_size: size in bytes of the allocated space of the pointer
 * @new_size: new size in block of the new memory block
 * Return: nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr1;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
			return (NULL);
		return (ptr1);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	ptr1 = malloc(new_size);

	if (ptr1 == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		ptr1[i] = ((char *) ptr)[i];
	}

	free(ptr);

	return (ptr1);
}

