#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Function that concatenates 2 strings
 * @s1: String 1
 * @s2: string 2
 * @n: concatenate results
 * Return:Nothing
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j = 0, i = 0, q = 0, w = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[j])
		j++;
	while (s2[q])
		q++;

	if (n >= q)
		w = j + q;
	else
		w = j + n;

	s = malloc((sizeof(char) * w) + 1);

	if (s == NULL)
		return (NULL);
	q = 0;

	while (i < w)
	{
		if (i <= j)
			s[i] = s1[i];
		if (i >= j)
		{
			s[i] = s2[q];
			q++;
		}
		i++;
	}
	s[i] = '\0';
	return (s);
}
