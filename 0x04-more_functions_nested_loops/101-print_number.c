#include "main.h"
#include <stdio.h>

/**
 * print_number - Function tht prints intergers
 * @n: character to use
 * Return: interger
 */

void print_number(int n)
{
	unsigned int r = n;

	if (n < 0)
	{
		n *= -1;
		r = n;
		_putchar(45);
	}
	r /= 10;
	if (r != 0)
		print_number(r);
	_putchar((unsigned int) n % 10 + '0');
}
