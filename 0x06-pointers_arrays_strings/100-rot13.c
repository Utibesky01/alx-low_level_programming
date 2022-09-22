#include "main.h"
#include <stdio.h>

/**
 * rot13 - converts string to leet
 *
 * @c: character string pointer
 * Return: char pointer
 */
char *rot13(char *c)
{
	int i, j;
	char rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxwyzabcdefghijklm",
	     alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (alphabet[j] == c[i])
			{
				c[i] = rot_13[j];
				break;
			}
		}
	}
	return (c);
}
