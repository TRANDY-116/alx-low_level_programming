#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: element of the memory
 * Return: 98 if failure
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);

	return (memory);
}
