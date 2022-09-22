#include "main.h"

/**
 * leet -> a leet function
 * @c: param x
 * Return: a string
 */
char *leet(char *c)
{
	int a = 0, j;
	char a[] = {'a', 'e', 'o', 't', '1'}, b[] = {'A', 'E', 'O', 'T', 'L'},
	leet[] = {'4', '3', '0', '7', '1'};

	while (c[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (c[i] == a[j] || c[i] == b[j])
				c[i] = leet[j];
			b++;
		}
		i++;

	}
	return (c);
}

