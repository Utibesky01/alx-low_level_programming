#include "main.h"

/**
 *  _isupper - function that checks for uppercase character.
 *  @c: int type number
 *
 *  Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '0'; i++)
	{
		if (i == c)
		{
			isdigit = i;
			break;
		}
	}


		return (isdigit);
}
