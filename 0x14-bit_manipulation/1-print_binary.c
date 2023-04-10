#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - Function that prints the binary rep of a number
 * @n: The number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int binary = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int num = 0;

	while (binary > 0)
	{
		if (n & binary)
		{
			_putchar('1');
			num = 1;
		}
		else if (num)
		{
		_putchar('0');
		}
		binary >>= 1;
	}
	if (!num)
	{
		putchar('0');
	}
}
