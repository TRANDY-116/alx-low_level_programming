#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate randome valid passwords for 101-crackme
 * Return: 0 (Success)
 */

int main(void)
{
	char paswd[84];
	int i = 0, sum = 0, dh1, dh2;

	srand(time(0));

	while (sum < 2772)
	{
		paswd[i] = 33 + rand() % 94;
		sum += paswd[i++];
	}
	paswd[i] = '\0';

	if (sum != 2772)
	{
		dh1 = (sum - 2772) / 2;
		dh2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			dh1++;
		for (i = 0; paswd[i]; i++)
		{
			if (paswd[i] >= (33 + dh1))
					{
					paswd[i] -= dh1;
					break;
					}
		}
		for (i = 0; paswd[i]; i++)
		{
			if (paswd[i] >= (33 + dh2))
			{
				paswd[i] -= dh2;
				break;
			}
		}
	}
	printf("%s", paswd);
	return (0);
}
