#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * is_digit - To check if a string contains a none digit
 * @str: string
 * Return: Nothing
 */

int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - Program that returns the length of a string
 * @str: String
 * Return: length of the string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * error - Check for errors
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}


/**
 * main - Program that multiplies 2 positive number
 * @argc: first positive number
 * @argv: second positive number
 * Return: results
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, car, dig1, dig2, *results, j = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		error();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	results = malloc(sizeof(int) * len);
	if (!results)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		results[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		dig1 = s1[len1] - '0';
		car = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			dig2 = s2[len2] - '0';
			car += results[len1 + len2 + 1] + (dig1 * dig2);
			results[len1 + len2 + 1] = car % 10;
			car /= 10;
		}
		if (car > 0)
			results[len1 + len2 + 1] += car;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (results[i])
			j = 1;
		if (j)
			_putchar(results[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(results);
	return (0);
}
