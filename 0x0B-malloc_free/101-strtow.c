#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int words_count(char *str);

/**
 * strtow - Function that splits strings into words
 * @str: the string in question
 * Return: words of the splited string
 */

char **strtow(char *str)
{
	int i, k = 0, length = 0, words, c = 0, start, end;
	char **mat, *tmp;

	while (*(str + length))
		length++;

	words = words_count(str);
	if (words == 0)
		return (NULL);
	mat = (char **) malloc(sizeof(char *) * (words + 1));

	if (mat == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mat[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	mat[k] = NULL;
	return (mat);
}

