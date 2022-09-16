#include "main.h"

/**
 * _isdigit - function that checks for uppercase character
 * @c: int type number
 *
 *Return: 1 if c is uppercase, 0 otherwise
 */

int _isdigit(int c)
{
	char i = '0';
	int i = 48, isdigit = 0;

	for (; i <= 58; i++)
	{
		if (i == c)
		{
			isdigit = i;
			break;
		}
	}
	
	return (isdigit);
}
