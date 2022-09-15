#include "main.h"
#include <stdio.h>

/*
 * _isupper - a function that checks for uppercase character.
 * @c: an input character
 * Return:1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
