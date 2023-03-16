#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of int
 * @min: Minimum value of the array
 * @max: maximum value of the array
 * Return: Array of int
 */

int *array_range(int min, int max)
{
	int *ptr, i = 0;

	if (min > max)
		return (NULL);
	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
