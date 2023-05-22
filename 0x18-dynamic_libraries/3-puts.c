#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - Function that prints a string followed by a nl
 * @str: the string to use
 * Return: null
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
