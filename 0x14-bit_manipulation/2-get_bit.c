#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - Function that returns a value of a bit at a given index
 * @n: the value of the bit
 * @index: the index of the bit
 * Return: value of the index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
